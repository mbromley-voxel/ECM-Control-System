﻿#include "state_ready.h"

namespace ECM{
namespace Galil {

State_Ready::State_Ready():
    AbstractStateGalil()
{
    std::cout<<"We are in the constructor of STATE_READY"<<std::endl;
    this->currentState = ECMState::STATE_READY;
    this->desiredState = ECMState::STATE_READY;
}

AbstractStateGalil* State_Ready::getClone() const
{
    return (new State_Ready(*this));
}

void State_Ready::getClone(AbstractStateGalil** state) const
{
    *state = new State_Ready(*this);
}

hsm::Transition State_Ready::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();

    if(currentState != desiredState)
    {
        //this means we want to chage the state for some reason
        //now initiate the state transition to the correct class
        switch (desiredState) {
        case ECMState::STATE_MANUAL_POSITIONING:
        {
            rtn = hsm::SiblingTransition<State_ManualPositioning>(currentCommand);
            break;
        }
        case ECMState::STATE_JOGGING:
        {
            rtn = hsm::SiblingTransition<State_Jogging>(currentCommand);
            break;
        }
        case ECMState::STATE_HOME_POSITIONING:
        {
            rtn = hsm::SiblingTransition<State_HomePositioning>(currentCommand);
            break;
        }
        case ECMState::STATE_SCRIPT_EXECUTION:
        {
            rtn = hsm::SiblingTransition<State_ScriptExecution>(currentCommand);
            break;
        }
        case ECMState::STATE_TOUCHOFF:
        {
            rtn = hsm::SiblingTransition<State_Touchoff>(currentCommand);
            break;
        }
        case ECMState::STATE_READY_STOP:
        {
            rtn = hsm::SiblingTransition<State_ReadyStop>();
            break;
        }
        case ECMState::STATE_ESTOP:
        {
            rtn = hsm::SiblingTransition<State_EStop>();
            break;
        }
        default:
            std::cout<<"I dont know how we eneded up in this transition state from STATE_READY."<<std::endl;
            break;
        }
    }

    return rtn;
}

void State_Ready::handleCommand(const AbstractCommand* command)
{
    const AbstractCommand* copyCommand = command->getClone(); //we first make a local copy so that we can manage the memory
    this->clearCommand(); //this way we have cleaned up the old pointer in the event we came here from a transition

    CommandType currentCommand = copyCommand->getCommandType();
    switch (currentCommand) {
    case CommandType::DOWNLOAD_PROGRAM:
    case CommandType::UPLOAD_PROGRAM:
    {
        desiredState = ECMState::STATE_READY_STOP;
        this->currentCommand = copyCommand;
        break;
    }
    case CommandType::ABSOLUTE_MOVE:
    case CommandType::RELATIVE_MOVE:
    {
        //While this state is responsive to this command, it is only responsive by causing the state machine to progress to a new state.
        //This command will transition the machine to STATE_MANUAL_POSITIONING
        desiredState = ECMState::STATE_MANUAL_POSITIONING;
        this->currentCommand = copyCommand;
        break;
    }
    case CommandType::JOG_MOVE:
    {
        //While this state is responsive to this command, it is only responsive by causing the state machine to progress to a new state.
        //This command will transition the machine to STATE_JOGGING
        desiredState = ECMState::STATE_JOGGING;
        this->currentCommand = copyCommand;
        break;
    }
    case CommandType::EXECUTE_PROGRAM:
    {
        //While this state is responsive to this command, it is only responsive by causing the state machine to progress to a new state.
        CommandExecuteProfilePtr castCommand = std::make_shared<CommandExecuteProfile>(*command->as<CommandExecuteProfile>());
        switch (castCommand->getProfileType()) {
        case CommandExecuteProfile::ProfileType::HOMING:
        {
            //This command will transition the machine to STATE_HOME_POSITIONING
            desiredState = ECMState::STATE_HOME_POSITIONING;
            this->currentCommand = copyCommand;
            break;
        }
        case CommandExecuteProfile::ProfileType::PROFILE:
        {
            //This command will transition the machine to STATE_SCRIPT_EXECUTION
            desiredState = ECMState::STATE_SCRIPT_EXECUTION;
            this->currentCommand = copyCommand;
            break;
        }
        case CommandExecuteProfile::ProfileType::TOUCHOFF:
        {
            //This command will transition the machine to STATE_TOUCHOFF
            desiredState = ECMState::STATE_TOUCHOFF;
            this->currentCommand = copyCommand;
            break;
        }
        default:
            break;
        }
        break;
    }
    case CommandType::MOTOR_OFF:
    case CommandType::STOP:
    {
        desiredState = ECMState::STATE_READY_STOP;
        break;
    }
    case CommandType::MOTOR_ON:
    {
        //While this state is responsive to this command, the motor should already be completely armed when it has arrived to this state.
        //First check to see if the motor is already armed, and if not, arm it
        if(!Owner().isMotorEnabled())
        {
            //If the motor is not currently armed, issue the command to arm it
            CommandMotorEnablePtr castCommand = std::make_shared<CommandMotorEnable>(*command->as<CommandMotorEnable>());
            Owner().issueGalilCommand(castCommand);
        }
        break;
    }
    case CommandType::CLEAR_BIT:
    case CommandType::SET_BIT:
    {
        std::cout<<"The current command: "<<CommandToString(currentCommand)<<" is not available while Galil is in the state of: "<<ECMStateToString(currentState)<<"."<<std::endl;
        break;
    }
    default:
        break;
    }
}

void State_Ready::Update()
{
    //Check the status of the estop state
    bool eStopState = this->checkEStop();
    if(eStopState == true)
    {
        //this means that the estop button has been cleared
        //we should therefore transition to the idle state
        desiredState = ECMState::STATE_ESTOP;
    }
}

void State_Ready::OnEnter()
{
    std::cout<<"We are in the state ready enter"<<std::endl;
    //The first thing we should do when entering this state is to engage the motor
    //Let us check to see if the motor is already armed, if not, follow through with the command

    if(!Owner().isMotorEnabled())
    {
        CommandMotorEnablePtr command = std::make_shared<CommandMotorEnable>();
        command->setEnableAxis(MotorAxis::Z);
        Owner().issueGalilCommand(command);
    }

    //Next we should establish the necessary gains for motion within this state
    CommandControllerGain command;
    Owner().issueGalilControllerGains(command);
}

void State_Ready::OnEnter(const AbstractCommand* command)
{
    this->OnEnter();

    if(command != nullptr)
    {
        //The command isnt null so we should handle it
        this->handleCommand(command);
    }
    else{
        //There was no actual command, therefore, there is nothing else to do at this point
    }
}

} //end of namespace Galil
} //end of namespace ECM

#include "states/state_home_positioning.h"
#include "states/state_jogging.h"
#include "states/state_manual_positioning.h"
#include "states/state_script_execution.h"
#include "states/state_touchoff.h"
#include "states/state_estop.h"
#include "states/state_ready_stop.h"
