#include "state_ecm_setup_machine.h"

namespace ECM{
namespace API {

ECMState_SetupMachine::ECMState_SetupMachine():
    AbstractStateECMProcess()
{
    std::cout<<"We are currently in the constructor of STATE_ECM_SETUP_MACHINE."<<std::endl;
    this->currentState = ECMState::STATE_ECM_SETUP_MACHINE;
    this->desiredState = ECMState::STATE_ECM_SETUP_MACHINE;
}

void ECMState_SetupMachine::OnExit()
{

}

AbstractStateECMProcess* ECMState_SetupMachine::getClone() const
{
    return (new ECMState_SetupMachine(*this));
}

void ECMState_SetupMachine::getClone(AbstractStateECMProcess** state) const
{
    *state = new ECMState_SetupMachine(*this);
}

hsm::Transition ECMState_SetupMachine::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();

    if(currentState != desiredState)
    {
        if(IsInInnerState<ECMState_SetupMachineComplete>())
        {
            std::cout<<"The machine has been completely setup and is ready to run the configuraiton."<<std::endl;
        }
        else if(IsInInnerState<ECMState_SetupMachineFailed>())
        {
            rtn = hsm::SiblingTransition<ECMState_Idle>();
        }
        else
        {
            //this means we want to chage the state of the vehicle for some reason
            //this could be caused by a command, action sensed by the vehicle, or
            //for various other peripheral reasons
            switch (desiredState) {
            case ECMState::STATE_ECM_SETUP_MACHINE_HOME:
            {
                ECMCommand_ExecuteCollection* executionCollection = m_ECMCollection.get()->as<ECMCommand_ExecuteCollection>();
                rtn = hsm::InnerEntryTransition<ECMState_SetupMachineHome>(executionCollection->getActiveConfiguration());
                break;
            }
            case ECMState::STATE_ECM_SETUP_MACHINE_PUMP:
            {
                rtn = hsm::InnerEntryTransition<ECMState_SetupMachinePump>();
                break;
            }
            case ECMState::STATE_ECM_SETUP_MACHINE_TOUCHOFF:
            {
                rtn = hsm::InnerEntryTransition<ECMState_SetupMachineTouchoff>();
                break;
            }
            default:
                std::cout<<"I dont know how we eneded up in this transition from within ECMState_Upload."<<std::endl;
                break;
            }
        }
    }

    return rtn;
}

void ECMState_SetupMachine::Update()
{

}

void ECMState_SetupMachine::OnEnter()
{

}

void ECMState_SetupMachine::OnEnter(const ECMCommand_AbstractCollectionPtr &collection)
{
    this->m_ECMCollection = collection;
    this->desiredState = ECMState::STATE_ECM_SETUP_MACHINE_HOME;
}

} //end of namespace API
} //end of namespace ECM

#include "states/state_ecm_idle.h"
#include "states/state_ecm_setup_machine_complete.h"
#include "states/state_ecm_setup_machine_failed.h"
#include "states/state_ecm_setup_machine_home.h"
#include "states/state_ecm_setup_machine_pump.h"
#include "states/state_ecm_setup_machine_touchoff.h"
