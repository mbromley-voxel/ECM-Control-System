#ifndef STATUS_MOTOR_ENABLED_H
#define STATUS_MOTOR_ENABLED_H

#include <axis_definitions.h>
#include "status/abstract_status.h"
#include "common/class_forward.h"

ECM_CLASS_FORWARD(Status_MotorEnabled);
class Status_MotorEnabled : public AbstractStatus
{
public:
    Status_MotorEnabled();

    Status_MotorEnabled(const Status_MotorEnabled &copy);

    void parseGalilString(const std::string &str);

    void setAxis(const MotorAxis &axis);
    MotorAxis getAxis() const;

    void setMotorEnabled(const bool &enabled);
    bool isMotorEnabled() const;

public:
    void operator = (const Status_MotorEnabled &rhs)
    {
        AbstractStatus::operator =(rhs);
        this->currentAxis = rhs.currentAxis;
        this->isEnabled = rhs.isEnabled;
    }

    bool operator == (const Status_MotorEnabled &rhs) {
        if(!AbstractStatus::operator ==(rhs))
        {
            return false;
        }
        if(this->currentAxis != rhs.currentAxis){
            return false;
        }
        if(this->isEnabled != rhs.isEnabled){
            return false;
        }
        return true;
    }

    bool operator != (const Status_MotorEnabled &rhs) {
        return !(*this == rhs);
    }

private:
    MotorAxis currentAxis = MotorAxis::Z;
    bool isEnabled = 0;

};

#endif // STATUS_MOTOR_ENABLED_H

