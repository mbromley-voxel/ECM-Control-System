#ifndef ABSTRACT_STATUS_H
#define ABSTRACT_STATUS_H

#include <string.h>
#include "common/class_forward.h"
#include "common/environment_time.h"

#include "status/status_types.h"

ECM_CLASS_FORWARD(AbstractStatus);
class AbstractStatus
{
public:
    AbstractStatus(const StatusTypes &type);

    AbstractStatus(const AbstractStatus &copy);

    void setStatusType(const StatusTypes &type);
    StatusTypes getStatusType() const;

    void setTime(const Data::EnvironmentTime &time);
    Data::EnvironmentTime getTime() const;

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
public:
    AbstractStatus& operator = (const AbstractStatus &rhs)
    {
        this->statusType = rhs.statusType;
        this->latestUpdate = rhs.latestUpdate;
        return *this;
    }

    bool operator == (const AbstractStatus &rhs) {
        if(this->statusType != rhs.statusType){
            return false;
        }
        return true;
    }

    bool operator != (const AbstractStatus &rhs) {
        return !(*this == rhs);
    }

private:
    StatusTypes statusType;
    Data::EnvironmentTime latestUpdate;
};

#endif // ABSTRACT_STATUS_H