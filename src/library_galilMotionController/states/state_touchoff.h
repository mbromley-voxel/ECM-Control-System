#ifndef STATE_TOUCHOFF_H
#define STATE_TOUCHOFF_H

#include "states/state_abstract_galil.h"

namespace ECM{
namespace Galil {

ECM_CLASS_FORWARD(State_Touchoff);

class State_Touchoff : public AbstractStateGalil
{
public:
    State_Touchoff(const GalilSettings &settings);

public:
    AbstractStateGalil* getClone() const override;

    void getClone(AbstractStateGalil** state) const override;

public:
    void handleCommand(const AbstractCommand* command) override;

};

} //end of namespace Galil
} //end of namespace ECM

#endif // STATE_TOUCHOFF_H