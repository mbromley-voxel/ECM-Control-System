#include "abstract_rigol_status.h"


namespace commands_Rigol {


AbstractRigolStatus::AbstractRigolStatus(const CommandTypes &type):
    commandType(type)
{
    this->requestTime.CurrentTime(common::Devices::SYSTEMCLOCK,this->requestTime);
}

AbstractRigolStatus::AbstractRigolStatus(const AbstractRigolStatus &copy)
{
    this->commandType = copy.commandType;
    this->receivedTime = copy.receivedTime;
    this->requestTime = copy.requestTime;
}

void AbstractRigolStatus::setCommandType(const CommandTypes &type)
{
    this->commandType = type;
}

CommandTypes AbstractRigolStatus::getCommandType() const
{
    return this->commandType;
}

void AbstractRigolStatus::updateReceivedTime()
{
    this->receivedTime.CurrentTime(common::Devices::SYSTEMCLOCK,this->receivedTime);
}

common::EnvironmentTime AbstractRigolStatus::getReceivedTime() const
{
    return this->receivedTime;
}

common::EnvironmentTime AbstractRigolStatus::getRequestTime() const
{
    return this->requestTime;
}

} //end of namespace commands

