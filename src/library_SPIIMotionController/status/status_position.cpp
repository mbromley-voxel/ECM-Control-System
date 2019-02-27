#include "status_position.h"

Status_PositionPerAxis::Status_PositionPerAxis():
    AbstractStatus(StatusTypes::STATUS_POSITION)
{
    this->currentAxis = MotorAxis::Z;
    this->position = 0;
}

Status_PositionPerAxis::Status_PositionPerAxis(const Status_PositionPerAxis &copy):
    AbstractStatus(copy)
{
    this->currentAxis = copy.currentAxis;
    this->position = copy.position;
}

void Status_PositionPerAxis::setAxis(const MotorAxis &axis)
{
    this->currentAxis = axis;
}

void Status_PositionPerAxis::setPosition(const double &pos)
{
    this->position = pos;
}

MotorAxis Status_PositionPerAxis::getAxis() const
{
    return this->currentAxis;
}

int Status_PositionPerAxis::getPosition() const
{
    return position;
}

Status_Position::Status_Position():
    AbstractStatus(StatusTypes::STATUS_POSITION)
{

}

Status_Position::Status_Position(const Status_Position &copy):
    AbstractStatus(copy)
{

}

Status_Position::~Status_Position()
{

}

bool Status_Position::updatePositionStatus(const std::vector<Status_PositionPerAxis> &status)
{
    bool positionChanged = false;
    for(size_t index = 0; index < status.size(); index++)
    {
        Status_PositionPerAxis currentStatus = status.at(index);

        std::map<MotorAxis, DataGetSetNotifier<Status_PositionPerAxis>*>::const_iterator iter = m_PositionStatus.find(currentStatus.getAxis());

        if(iter != m_PositionStatus.end()) //item is already in the map and therefore we just need to update it
        {
            if(m_PositionStatus.at(currentStatus.getAxis())->set(currentStatus))
            {
                if(!positionChanged)
                    positionChanged = true;
            }
        }
        else {
            DataGetSetNotifier<Status_PositionPerAxis>* newStatus = new DataGetSetNotifier<Status_PositionPerAxis>();
            newStatus->set(currentStatus);
            //insert it into the map
            m_PositionStatus.insert(std::pair<MotorAxis, DataGetSetNotifier<Status_PositionPerAxis>*>(currentStatus.getAxis(), newStatus));
            positionChanged = true;
        }
    }
    return positionChanged;
}

Status_PositionPerAxis* Status_Position::getAxisPosition(const MotorAxis &axis)
{

}

DataGetSetNotifier<Status_PositionPerAxis>* Status_Position::getAxisPositionNotifier(const MotorAxis &axis)
{
    return this->m_PositionStatus.at(axis);
}

