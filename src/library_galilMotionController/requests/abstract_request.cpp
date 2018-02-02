#include "abstract_request.h"

AbstractRequest::AbstractRequest(const RequestTypes &type, const unsigned int &respSize)
{
    this->requestType = type;
    this->bufferSize = respSize;
}


void AbstractRequest::setBufferSize(const unsigned int &size)
{
    this->bufferSize = size;
}

unsigned int AbstractRequest::getAllocatedBufferSize() const
{
    return this->bufferSize;
}

std::string AbstractRequest::getBuffer()
{
//    char str[this->bufferSize];
//    *buffer = &str;
    return buffer;
    //strcpy(chrArray,str);
}

void AbstractRequest::increaseBufferSize()
{
    bufferSize+=bufferSize;
}