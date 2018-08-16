#ifndef STATE_ABSTRACT_ECM_PROCESS_H
#define STATE_ABSTRACT_ECM_PROCESS_H

#include <iostream>
#include <thread>

#include "common/class_forward.h"

#include "../ecm_api.h"

#include "ECM_API/states/state_ecm_types.h"
#include "library_galilMotionController/states/hsm.h"

namespace ECM{
namespace API {

class Empty
{
    Empty() = default;
};

class AbstractStateECMProcess : public hsm::StateWithOwner<ECM_API>
{
public:
    AbstractStateECMProcess() = default;

    AbstractStateECMProcess(const AbstractStateECMProcess &copy);

    /**
      */
    virtual ~AbstractStateECMProcess() = default;

    virtual void OnExit();
public:
    /**
     *
     */
    template <class T>
    const T *as() const
    {
        //ensure that we are attempting to cast it to a type of state
        return static_cast<const T *>(this);
    }

    /**
     *
     */
    template <class T>
    T *as()
    {
        //ensure that we are attempting to cast it to a type of state
        return static_cast<T *>(this);
    }

    /**
     * @brief getClone
     * @return
     */
    virtual AbstractStateECMProcess* getClone() const = 0;

    /**
     * @brief getClone
     * @param state
     */
    virtual void getClone(AbstractStateECMProcess** state) const = 0;

public:
    virtual ECMState getCurrentState() const;

    virtual ECMState getDesiredState() const;

protected:
    void clearCommand();
protected:

    ECMState currentState;
    ECMState desiredState;
};

} //end of namespace API
} //end of namespace ECM

#endif // STATE_ABSTRACT_ECM_PROCESS_H