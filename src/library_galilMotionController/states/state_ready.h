#ifndef STATE_READY2_H
#define STATE_READY2_H

#include "states/state_abstract_galil.h"

namespace ECM{
namespace Galil {

class State_Ready : public AbstractStateGalil
{
public:
    State_Ready();

public:
    AbstractStateGalil* getClone() const override;

    void getClone(AbstractStateGalil** state) const override;

public:
    hsm::Transition GetTransition() override;

public:
    void handleCommand(const AbstractCommand* command) override;

    void OnEnter() override;

    void OnEnter(AbstractCommand *command);

};

} //end of namespace Galil
} //end of namespace ECM

#endif // STATE_READY2_H
