#include "state_abstract_ecm_process.h"

namespace ECM {
namespace API {

AbstractStateECMProcess::AbstractStateECMProcess(const AbstractStateECMProcess &copy)
{
    this->currentState = copy.currentState;
    this->desiredState = copy.desiredState;
}

ECMState AbstractStateECMProcess::getCurrentState() const
{
    return currentState;
}

ECMState AbstractStateECMProcess::getDesiredState() const
{
    return desiredState;
}

void AbstractStateECMProcess::initializeFromCollection(const ECMCommand_ProfileCollection &collection)
{
    UNUSED(collection);
}

void AbstractStateECMProcess::executeCollection(const ECMCommand_ExecuteCollection &collection)
{
    UNUSED(collection);
}

void AbstractStateECMProcess::clearCommand()
{

}

void AbstractStateECMProcess::OnExit()
{

}

void AbstractStateECMProcess::OnEnter()
{

}

} //end of namespace Galil
} //end of namespace ECM
