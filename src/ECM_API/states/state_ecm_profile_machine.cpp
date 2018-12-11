#include "state_ecm_profile_machine.h"

namespace ECM{
namespace API {

ECMState_ProfileMachine::ECMState_ProfileMachine():
    AbstractStateECMProcess()
{
    std::cout<<"We are currently in the constructor of STATE_ECM_PROFILE_MACHINE."<<std::endl;
    this->currentState = ECMState::STATE_ECM_PROFILE_MACHINE;
    this->desiredState = ECMState::STATE_ECM_PROFILE_MACHINE;
}

void ECMState_ProfileMachine::OnExit()
{

}

AbstractStateECMProcess* ECMState_ProfileMachine::getClone() const
{
    return (new ECMState_ProfileMachine(*this));
}

void ECMState_ProfileMachine::getClone(AbstractStateECMProcess** state) const
{
    *state = new ECMState_ProfileMachine(*this);
}

hsm::Transition ECMState_ProfileMachine::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();
    if(currentState != desiredState)
    {
        if(IsInInnerState<ECMState_ProfileMachineFailed>())
        {
            //if we have failed we can completely stop the machining process
            rtn = hsm::SiblingTransition<ECMState_Idle>();
        }
        else if(IsInInnerState<ECMState_ProfileMachineComplete>())
        {
            //if we have succeeded let us see if there is more to machine
            ECMState_ProfileMachineBase* currentInnerState = static_cast<ECMState_ProfileMachineBase*>(GetImmediateInnerState());

            ECMCommand_ProfileConfiguration currentConfig = currentInnerState->getCurrentConfig();
            m_ECMCollection.insertProfile(currentConfig);
            if(m_ECMCollection.doActiveOperationsRemain())
            {
                rtn = hsm::SiblingTransition<ECMState_Upload>(this->m_ECMCollection);
            }
            else
            {
                rtn = hsm::SiblingTransition<ECMState_ExecutionComplete>(this->m_ECMCollection);
            }
        }
        else
        {
            switch (desiredState) {
            case ECMState::STATE_ECM_PROFILE_MACHINE_PROCESS:
            {
                rtn = hsm::InnerEntryTransition<ECMState_ProfileMachineProcess>(m_ECMCollection.getActiveConfiguration());
                break;
            }
            default:
                break;
            }
        }
        }

    return rtn;
}

void ECMState_ProfileMachine::Update()
{

}

void ECMState_ProfileMachine::OnEnter()
{
    std::cout<<"we are in here for some reason"<<std::endl;
}

void ECMState_ProfileMachine::OnEnter(const ECMCommand_ExecuteCollection &collection)
{
    //First update the configuation per what was received upon entering the state
    this->m_ECMCollection = collection;
    m_ECMCollection.initializeProfileExecution();

    /*
     * We need to establish if we should clear the logs. Since this is a recursive process, we require that two conditions
     * be met satisfactorily.
     * 1) Require that the logs indeed in the first place desire to be overwritten.
     * 2) Require that the operation is the first operation of the collection. This is required that since we can return
     * to this condition from another event, we would then subsequently not want to clear the original logs.
     */
    if(m_ECMCollection.shouldOverwriteLogs() && m_ECMCollection.isFirstOperation(m_ECMCollection.getActiveIndex()))
    {
        Owner().initializeOperationalCollection(m_ECMCollection, true);
    }
    else if(m_ECMCollection.isFirstOperation(m_ECMCollection.getActiveIndex()))
    {
        Owner().initializeOperationalCollection(m_ECMCollection, false);
    }

    /*
     * When initializing the logs, this process sets up the directory structure and the accompanying header contents.
     * At this time, the collection is also written to the appropriate contents and any necessary loggin setup.
     */
    Owner().initializeOperationLogs(m_ECMCollection);

    this->desiredState = ECMState::STATE_ECM_PROFILE_MACHINE_PROCESS;
}

} //end of namespace Galil
} //end of namespace ECM

#include "states/state_ecm_idle.h"

#include "states/state_ecm_upload.h"

#include "states/state_ecm_profile_machine_complete_execution.h"
#include "states/state_ecm_profile_machine_complete.h"
#include "states/state_ecm_profile_machine_failed.h"
#include "states/state_ecm_profile_machine_process.h"

#include "states/state_ecm_execution_complete.h"
