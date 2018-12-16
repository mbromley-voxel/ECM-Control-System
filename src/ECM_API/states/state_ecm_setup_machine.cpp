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

void ECMState_SetupMachine::stopProcess()
{
    desiredState = ECMState::STATE_ECM_IDLE;
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
            rtn = hsm::SiblingTransition<ECMState_ProfileMachine>(this->m_ECMCollection);
        }
        else if(IsInInnerState<ECMState_SetupMachineFailed>())
        {
//            ECMCommand_ProfileConfiguration currentConfig = this->m_ECMCollection.getActiveConfiguration();
//            currentConfig.execProperties.establishEndTime();
//            this->m_ECMCollection.insertProfile(currentConfig);

            this->m_ECMCollection.establishEndTime();
            Owner().concludeExecutingOperation(this->m_ECMCollection.getActiveConfiguration());
            Owner().concludeExecutingCollection(this->m_ECMCollection);

            rtn = hsm::SiblingTransition<ECMState_Idle>();
        }
        else
        {
            ECMCommand_AbstractProfileConfigPtr activeConfiguration = m_ECMCollection.getActiveConfiguration();
            switch (activeConfiguration->getConfigType()) {
            case ECMCommand_AbstractProfileConfig::ConfigType::OPERATION:
            {
                switch (desiredState) {
                case ECMState::STATE_ECM_SETUP_MACHINE_HOME:
                {
                    rtn = hsm::InnerEntryTransition<ECMState_SetupMachineHome>(activeConfiguration);
                    break;
                }
                default:
                    std::cout<<"I dont know how we eneded up in this transition from within ECMState_SetupMachine."<<std::endl;
                    break;
                }

                break;
            }
            case ECMCommand_AbstractProfileConfig::ConfigType::PAUSE:
            {
                rtn = hsm::SiblingTransition<ECMState_SetupMachinePump>(activeConfiguration);
                break;
            }
            default:
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

void ECMState_SetupMachine::OnEnter(const ECMCommand_ExecuteCollection &collection)
{
    this->m_ECMCollection = collection;

    AbstractStateECMProcess::notifyOwnerStateTransition();

    ECMCommand_AbstractProfileConfigPtr currentConfig = this->m_ECMCollection.getActiveConfiguration();

    switch (currentConfig->getConfigType()) {
    case ECMCommand_AbstractProfileConfig::ConfigType::OPERATION:
    {
        this->desiredState = ECMState::STATE_ECM_SETUP_MACHINE_HOME;
        break;
    }
    case ECMCommand_AbstractProfileConfig::ConfigType::PAUSE:
    {
        this->desiredState = ECMState::STATE_ECM_SETUP_MACHINE_PUMP;
        break;
    }
    default:
        break;
    }
}

} //end of namespace API
} //end of namespace ECM

#include "states/state_ecm_idle.h"
#include "states/state_ecm_setup_machine_complete.h"
#include "states/state_ecm_setup_machine_failed.h"
#include "states/state_ecm_setup_machine_home.h"
#include "states/state_ecm_setup_machine_pump.h"
#include "states/state_ecm_setup_machine_touchoff.h"

#include "states/state_ecm_profile_machine.h"
