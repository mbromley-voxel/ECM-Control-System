#ifndef MAVLINK_COMMS_H
#define MAVLINK_COMMS_H

#include "comms_galil_setup_global.h"

#include <memory>
#include <vector>
#include <functional>
#include <math.h>
#include <unordered_map>

#include "i_link.h"
#include "i_protocol_galil_events.h"

#include "i_protocol.h"

#include "mavlink_configuration.h"



namespace Comms
{

class COMMS_GALIL_SETUPSHARED_EXPORT GalilProtocol : public IProtocol
{

public:
    GalilProtocol();

    void AddListner(const IProtocolGalilEvents* listener);

    virtual void ResetMetadataForLink(const ILink* link);


    //!
    //! \brief Get the protocol channel being used for a specific link
    //! \param link Link to check
    //! \return Channel of the protocol being used
    //!
    virtual uint8_t GetChannel(ILink *link) const;

    //!
    //! \brief Set the channel being used for a specific link on the protocol
    //! \param link Link to set
    //! \param channel Channel to use
    //!
    virtual void SetChannel(ILink *link, uint8_t channel);


    //!
    //! \brief Send message onto some link
    //!
    //! This code is largely a copy from MAVLinkProtocol::sendMessage in qgroundcontrol
    //! \param link Link to put message onto
    //! \param message Message to send
    //!
    void SendProtocolMessage(const ILink *link, const mavlink_message_t &message);


    //!
    //! \brief Read data incoming from some link
    //!
    //! This code is largely a copy from MAVLinkProtocol::receiveBytes in qgroundcontrol
    //! \param link Link which data was read from
    //! \param buffer data that was read.
    //!
    virtual void ReceiveData(ILink *link, const std::vector<uint8_t> &buffer);

private:

    void Emit(const std::function<void(const IProtocolGalilEvents*)> func)
    {
        for(const IProtocolGalilEvents* listener : m_Listners)
            func(listener);
    }

private:
    std::vector<const IProtocolGalilEvents*> m_Listners;
};


} //END MAVLINKComms

#endif // MAVLINK_COMMS_H
