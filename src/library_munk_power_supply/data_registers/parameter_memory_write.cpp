#include "parameter_memory_write.h"

namespace DataParameter{


ParameterMemoryWrite::ParameterMemoryWrite()
{
    this->parameterCode = DataParameter::ParameterTypeToInt(ParameterType::MEMORYWRITE);
}

ParameterType ParameterMemoryWrite::getParameterType() const
{
    return ParameterType::MEMORYWRITE;
}

std::string ParameterMemoryWrite::getDescription() const
{
    std::string str = "";
    return str;
}

QByteArray ParameterMemoryWrite::getByteArray() const
{
    QByteArray ba;
    int messageLength = 1;
    uint8_t HIGHSeqType = (uint8_t)((messageLength & 0xFF00) >> 8);
    uint8_t LOWSeqType = (uint8_t)(messageLength & 0x00FF);
    ba.append(HIGHSeqType);
    ba.append(LOWSeqType);

    ba.append((uint8_t)2);

    QByteArray empty = QByteArrayLiteral("\x00\x00");
    ba.append(empty);

    return ba;
}

} //end of namespace ParameterMemoryWrite