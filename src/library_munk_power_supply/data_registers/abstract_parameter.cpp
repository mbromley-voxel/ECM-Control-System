#include "abstract_parameter.h"

namespace DataParameter {

AbstractParameter::AbstractParameter():
    parameterCode(0),slaveAddress(0),readOrwrite(Data::ReadWriteType::WRITE),highChecksum(0),lowChecksum(0)
{

}

AbstractParameter::AbstractParameter(const int &code):
    parameterCode(code),slaveAddress(0),readOrwrite(Data::ReadWriteType::WRITE),highChecksum(0),lowChecksum(0)
{

}

void AbstractParameter::setSlaveAddress(const uint8_t &address)
{
    this->slaveAddress = address;
}

void AbstractParameter::setReadorWrite(const Data::ReadWriteType &type)
{
    this->readOrwrite = type;
}

QByteArray AbstractParameter::getFullMessage()
{
    QByteArray data = getByteArray();
    unsigned int checkSum = CRC16(data);
    highChecksum = (uint8_t)((checkSum & 0xFF00) >> 8);
    lowChecksum = (uint8_t)(checkSum & 0x00FF);
    data.append(lowChecksum);
    data.append(highChecksum);
    return data;
}


unsigned int AbstractParameter::CRC16(const QByteArray &array)
{
    char j;
    WORD Temp = 0xFFFF;
    int size = array.size();
    for (int i=0;i<size;i++){
        unsigned char charTemp = (unsigned char)array.at(i);
        Temp ^= (WORD)charTemp;
        for (j=8;j!=0;j--){

            if ((Temp & 0x0001) != 0) {      // If the LSB is set
                Temp >>= 1;                    // Shift right and XOR 0xA001
                Temp ^= 0xA001;
            }
            else                            // Else LSB is not set
                Temp >>= 1;                    // Just shift right
        }
    }
    return Temp;
}

} //end of namespace DataParameter