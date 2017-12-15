#include "state_abstract_galil.h"

namespace ECM{
namespace Galil {

AbstractStateGalil::AbstractStateGalil(const GalilSettings &settings):
    mSettings(settings)
{

}

AbstractStateGalil::AbstractStateGalil(const AbstractStateGalil &copy)
{
    this->currentState = copy.currentState;
    this->desiredState = copy.desiredState;
}

ECMState AbstractStateGalil::getCurrentState() const
{
    return currentState;
}

ECMState AbstractStateGalil::getDesiredState() const
{
    return desiredState;
}

} //end of namespace Galil
} //end of namespace ECM
