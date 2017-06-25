#include "segment_current_data.h"

namespace DataParameter
{

SegmentCurrentData::SegmentCurrentData(const Data::SegmentLevel &levelValue, const Data::SegmentMode &levelMode)
{
    //let us update the stored values with those that created the object
    this->level = levelValue;
    this->mode = levelMode;
    //let us initialize some default values
    this->currentFactor = Data::CurrentFactorType::AMPS;
    this->current = 0.0;
    this->prescale = Data::SegmentVIPower::ONE;
}


QByteArray SegmentCurrentData::getDataArray() const
{
    QByteArray byteArray;
    uint32_t ba = 0;
    ba = updateAmpsBitArray(ba);
    ba = updatePrescaleBitArray(ba);
    ba = updateSetPointBitArray(ba);
    byteArray.append(ba);
    return byteArray;
}

void SegmentCurrentData::updateCurrentFactor(const Data::CurrentFactorType &value)
{
    this->currentFactor = value;
}

void SegmentCurrentData::updatePrescalePower(const Data::SegmentVIPower &value)
{
    this->prescale = value;
}

void SegmentCurrentData::updateCurrentSetpoint(const int &value)
{
    if(value > 4095)
    {
        this->current = 4095;
    }
    else if(value < 0)
    {
        this->current = 0;
    }
    else
    {
        this->current = value;
    }
}

Data::SegmentLevel SegmentCurrentData::getSegmentLevel() const
{
    return this->level;
}

Data::SegmentMode SegmentCurrentData::getSegmentMode() const
{
    return this->mode;
}

Data::CurrentFactorType SegmentCurrentData::getCurrentFactor() const
{
    return this->currentFactor;
}

Data::SegmentVIPower SegmentCurrentData::getCurrentPrescale() const
{
    return this->prescale;
}

int SegmentCurrentData::getCurrent() const
{
    return this->current;
}


uint32_t SegmentCurrentData::updateAmpsBitArray(const uint32_t &bitArray) const
{
    uint32_t ba = 0;
    uint32_t mask = 1<<15;
    int tmpType = (int)currentFactor;

    ba = (bitArray & (~mask)) | (tmpType<<15);
    return ba;
}

uint32_t SegmentCurrentData::updatePrescaleBitArray(const uint32_t &bitArray) const
{
    uint32_t ba = 0;
    uint32_t mask = 7<<12;
    int tmpType = (int)prescale;

    ba = (bitArray & (~mask)) | (tmpType<<12);
    return ba;
}

uint32_t SegmentCurrentData::updateSetPointBitArray(const uint32_t &bitArray) const
{
    uint32_t ba = 0;
    uint32_t mask = 4095<<0;
    ba = (bitArray & (~mask)) | (this->current<<0);
    return ba;
}
} //end of namespace DataParameter
