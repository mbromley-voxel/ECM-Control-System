#ifndef COMMS_EVENTS_H
#define COMMS_EVENTS_H

#include <string>

namespace Comms
{

class CommsEvents
{
public:

    /////////////////////////////////////////////////////////
    /// Link Events
    /////////////////////////////////////////////////////////

    virtual void LinkConnected() const
    {

    }

    virtual void LinkDisconnected() const
    {

    }

    virtual void StatusMessage(const std::string &msg)
    {

    }

};

}

#endif // COMMS_EVENTS_H