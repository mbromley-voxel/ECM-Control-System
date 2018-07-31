#include "state_abstract_ecm_process.h"

namespace ECM{
namespace API {

AbstractStateECMProcess::AbstractStateECMProcess(const AbstractStateECMProcess &copy)
{
    this->currentState = copy.currentState;
    this->desiredState = copy.desiredState;
}

void AbstractStateECMProcess::OnExit()
{

}

ECMState AbstractStateECMProcess::getCurrentState() const
{
    return currentState;
}

ECMState AbstractStateECMProcess::getDesiredState() const
{
    return desiredState;
}

void AbstractStateECMProcess::clearCommand()
{

}

} //end of namespace Galil
} //end of namespace ECM
