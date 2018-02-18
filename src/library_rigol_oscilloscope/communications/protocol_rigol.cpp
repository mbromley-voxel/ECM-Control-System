#include "protocol_rigol.h"

namespace rigol {
namespace comms{

RigolProtocol::RigolProtocol()
{

}

void RigolProtocol::AddListner(const IProtocolRigolEvents* listener)
{
    m_Listners.push_back(listener);
}

void RigolProtocol::sendSetMeasurementCommand(const ILink *link, const commands::MeasureCommand_Item &command)
{
    std::string commandString = command.getCommandString();
    QByteArray byteArray(commandString.c_str(), commandString.length());
    link->WriteBytes(byteArray);
}

void RigolProtocol::sendMeasurementRequest(const ILink *link, const commands::MeasureCommand_Item &command)
{
    std::string commandString = command.getCommandString();
    QByteArray byteArray(commandString.c_str(), commandString.length());
    commands::AbstractRigolStatus* response = command.getExpectedResponse(); //this also establishes the time of request
    this->responseQueue.push_back(response);
    link->WriteBytes(byteArray);
}

//!
//! \brief Read data incoming from some link
//!
//! \param link Link which data was read from
//! \param buffer data that was read.
//!
void RigolProtocol::ReceiveData(ILink *link, const std::vector<uint8_t> &buffer)
{
    UNUSED(link);
    std::cout<<"I have received some data that looks like this."<<std::endl;
    for(size_t i = 0; i < buffer.size(); i++)
    {
        std::cout<<buffer.at(i);
    }
}





} //end of namespace comms
} //end of namespace rigol
