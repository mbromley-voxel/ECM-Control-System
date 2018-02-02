#ifndef COMMS_MARSHALER_H
#define COMMS_MARSHALER_H

#include "common/publisher.h"

#include "comms_galil_setup_global.h"

#include <unordered_map>

#include "i_link.h"
#include "galil_link.h"
#include "protocol_galil.h"

#include "i_link_events.h"
#include "comms_events.h"

namespace Comms
{

class COMMS_GALIL_SETUPSHARED_EXPORT CommsMarshaler : public Publisher<CommsEvents>, private ILinkEvents, private IProtocolGalilEvents
{
public:

    CommsMarshaler();


    //!
    //! \brief Connect to an already created link
    //! \param linkName Name of link to connect to
    //! \return True if connection succesfull, false otherwise
    //!
    bool ConnectToLink(const std::string &linkName);


    //!
    //! \brief Issue a message to a given link
    //!
    //! The type used in the shall be an underlaying type which the protocol understands
    //! \param link Link to send message on
    //! \param message Message to send
    //!
    template <typename T>
    void SendGalilMessage(const T& message);



private:

    //////////////////////////////////////////////////////////////
    /// React to Link Events
    //////////////////////////////////////////////////////////////

    void ConnectionOpened() const override;

    void ConnectionRemoved() const override;

    //////////////////////////////////////////////////////////////
    /// IProtocolGalilEvents
    //////////////////////////////////////////////////////////////

    //!
    //! \brief A Message has been received over Mavlink protocol
    //! \param linkName Link identifier which generated call
    //! \param message Message that has been received
    //!
    void MessageReceived(const double &message) const override;

private:
    std::shared_ptr<ILink> link;
    std::shared_ptr<GalilProtocol> protocol;

};

}//END Comms

#endif // LINKMARSHALER_H