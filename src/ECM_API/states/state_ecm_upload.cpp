#include "state_ecm_upload.h"

namespace ECM{
namespace API {

ECMState_Upload::ECMState_Upload():
    AbstractStateECMProcess()
{
    std::cout<<"We are currently in the constructor of STATE_ECM_UPLOAD."<<std::endl;
    this->currentState = ECMState::STATE_ECM_UPLOAD;
    this->desiredState = ECMState::STATE_ECM_UPLOAD;
}

void ECMState_Upload::OnExit()
{

}

AbstractStateECMProcess* ECMState_Upload::getClone() const
{
    return (new ECMState_Upload(*this));
}

void ECMState_Upload::getClone(AbstractStateECMProcess** state) const
{
    *state = new ECMState_Upload(*this);
}

hsm::Transition ECMState_Upload::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();

    if(currentState != desiredState)
    {
        if(IsInInnerState<ECMState_UploadComplete>())
        {
            std::cout<<"The upload state sees that all of the uploads are complete"<<std::endl;
            rtn = hsm::SiblingTransition<ECMState_SetupMachine>(this->m_ECMCollection);
        }
        else if(IsInInnerState<ECMState_UploadFailed>())
        {
            rtn = hsm::SiblingTransition<ECMState_Idle>();
        }
        else
        {
            //this means we want to chage the state of the vehicle for some reason
            //this could be caused by a command, action sensed by the vehicle, or
            //for various other peripheral reasons
            switch (desiredState) {
            case ECMState::STATE_ECM_UPLOAD_MOTION_PROFILE:
            {
                ECMCommand_ExecuteCollection* executionCollection = m_ECMCollection.get()->as<ECMCommand_ExecuteCollection>();
                rtn = hsm::InnerEntryTransition<ECMState_UploadMotionProfile>(executionCollection->getActiveConfiguration());
                break;
            }
            case ECMState::STATE_ECM_UPLOAD_MOTION_VARIABLES:
            {
                //rtn = hsm::InnerEntryTransition<ECMState_UploadMotionVariables>(m_ProfileCollection);
                break;
            }
            case ECMState::STATE_ECM_UPLOAD_POWER_REGISTER_SEGMENTS:
            {
                //rtn = hsm::InnerEntryTransition<ECMState_UploadPowerRegisterSegments>(m_ProfileCollection);
                break;
            }
            case ECMState::STATE_ECM_UPLOAD_PUMP_PARAMETERS:
            {
                //rtn = hsm::InnerEntryTransition<ECMState_UploadPumpParameters>(m_ProfileCollection);
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

void ECMState_Upload::Update()
{

}

void ECMState_Upload::OnEnter()
{

}

void ECMState_Upload::OnEnter(const ECMCommand_AbstractCollectionPtr &collection)
{
    //First update the configuation per what was received upon entering the state
    this->m_ECMCollection = collection;
    this->desiredState = ECMState::STATE_ECM_UPLOAD_MOTION_PROFILE;
}

} //end of namespace API
} //end of namespace ECM

#include "states/state_ecm_idle.h"

#include "states/state_ecm_setup_machine.h"

#include "states/state_ecm_upload_complete.h"
#include "states/state_ecm_upload_failed.h"
#include "states/state_ecm_upload_motion_profile.h"
#include "states/state_ecm_upload_motion_variables.h"
#include "states/state_ecm_upload_power_register_segments.h"
#include "states/state_ecm_upload_pump_parameters.h"