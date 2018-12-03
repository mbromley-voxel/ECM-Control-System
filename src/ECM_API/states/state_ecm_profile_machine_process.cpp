#include "state_ecm_profile_machine_process.h"

namespace ECM{
namespace API {

ECMState_ProfileMachineProcess::ECMState_ProfileMachineProcess():
    AbstractStateECMProcess()
{
    std::cout<<"We are currently in the constructor of STATE_ECM_PROFILE_MACHINE_PROCESS."<<std::endl;
    this->currentState = ECMState::STATE_ECM_PROFILE_MACHINE_PROCESS;
    this->desiredState = ECMState::STATE_ECM_PROFILE_MACHINE_PROCESS;
}

void ECMState_ProfileMachineProcess::OnExit()
{

}

AbstractStateECMProcess* ECMState_ProfileMachineProcess::getClone() const
{
    return (new ECMState_ProfileMachineProcess(*this));
}

void ECMState_ProfileMachineProcess::getClone(AbstractStateECMProcess** state) const
{
    *state = new ECMState_ProfileMachineProcess(*this);
}

hsm::Transition ECMState_ProfileMachineProcess::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();

    if(currentState != desiredState)
    {
        switch (desiredState) {
        default:
            std::cout<<"I dont know how we eneded up in this transition state from "<<ECMStateToString(this->currentState)<<"."<<std::endl;
            break;
        }
    }

    return rtn;
}

void ECMState_ProfileMachineProcess::Update()
{

}

void ECMState_ProfileMachineProcess::OnEnter()
{

}

void ECMState_ProfileMachineProcess::OnEnter(const ECMCommand_ProfileConfiguration &configuration)
{
    this->m_Config = configuration;

    Owner().m_Galil->AddLambda_NewMotionProfileState(this,[this](const MotionProfileState &profileState){

        switch (profileState.getProfileState()->getType()) {
        case MotionProfile::ProfileType::PROFILE:
        {
            ProfileState_Machining* castState = (ProfileState_Machining*)profileState.getProfileState().get();
            m_Config.execProperties.setProfileCode(castState->getCurrentCode());

            switch (castState->getCurrentCode()) {
            case(ProfileState_Machining::MACHININGProfileCodes::INCOMPLETE):
            {
                //There is nothing to do here as the machining profile is still executing
                break;
            }
            case(ProfileState_Machining::MACHININGProfileCodes::COMPLETE):
            {
                m_Config.execProperties.setHasProfileBeenCompleted(true);
                desiredState = ECMState::STATE_ECM_PROFILE_MACHINE_CEASE;
                break;
            }
            case(ProfileState_Machining::MACHININGProfileCodes::ABORTED):
            {
                desiredState = ECMState::STATE_ECM_PROFILE_MACHINE_CEASE;
                break;
            }
            default:
                break;
            }
            break;
        }
        default:
            break;
        }
    });

    m_Config.execProperties.initializeExecution();
    Owner().executeMachiningProcess(this->m_Config);
}



} //end of namespace Galil
} //end of namespace ECM


#include "states/state_ecm_profile_machine_cease.h"
