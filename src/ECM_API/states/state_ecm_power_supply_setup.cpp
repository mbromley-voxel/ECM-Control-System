#include "state_ecm_power_supply_setup.h"

namespace ECM{
namespace API {

ECMState_PowerSupplySetup::ECMState_PowerSupplySetup():
    AbstractStateECMProcess()
{
    this->currentState = ECMState::STATE_ECM_POWERSUPPLY_SETUP;
    this->desiredState = ECMState::STATE_ECM_POWERSUPPLY_SETUP;
}

void ECMState_PowerSupplySetup::OnExit()
{

}

AbstractStateECMProcess* ECMState_PowerSupplySetup::getClone() const
{
    return (new ECMState_PowerSupplySetup(*this));
}

void ECMState_PowerSupplySetup::getClone(AbstractStateECMProcess** state) const
{
    *state = new ECMState_PowerSupplySetup(*this);
}

hsm::Transition ECMState_PowerSupplySetup::GetTransition()
{
    hsm::Transition rtn = hsm::NoTransition();

    if(currentState != desiredState)
    {
        //this means we want to chage the state for some reason
        //now initiate the state transition to the correct class
        switch (desiredState) {
        case ECMState::STATE_ECM_IDLE:
        {
            rtn = hsm::SiblingTransition<ECMState_Idle>();
            break;
        }
        case ECMState::STATE_ECM_TOUCHOFF:
        {
            rtn = hsm::SiblingTransition<ECMState_Touchoff>();
            break;
        }
        default:
            std::cout<<"I dont know how we eneded up in this transition state from "<<ECMStateToString(this->currentState)<<"."<<std::endl;
            break;
        }
    }

    return rtn;
}

void ECMState_PowerSupplySetup::Update()
{

}

void ECMState_PowerSupplySetup::OnEnter()
{

}

} //end of namespace Galil
} //end of namespace ECM

#include "states/state_ecm_idle.h"
#include "states/state_ecm_touchoff.h"
