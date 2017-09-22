#include "segment_time_data_detailed.h"

namespace DataParameter {

SegmentTimeDataDetailed::SegmentTimeDataDetailed():
    supplyOutput(Data::TypeSupplyOutput::OUTPUT1),dataObject(0,0),segmentMode(Data::SegmentMode::DEAD),timeValue(0)
{

}

SegmentTimeDataDetailed::SegmentTimeDataDetailed(const int &voltage, const int &current, const Data::SegmentMode &mode, const uint32_t &time)
{
    setSupplyOutput(Data::TypeSupplyOutput::OUTPUT1);
    setSegmentVoltage(voltage);
    setSegmentCurrent(current);
    setSegmentMode(mode);
    setTimeValue(time);
}

void SegmentTimeDataDetailed::setSupplyOutput(const Data::TypeSupplyOutput &outputNumber)
{
    this->supplyOutput = outputNumber;
}

void SegmentTimeDataDetailed::setSegmentVoltage(const double &voltage)
{
    this->dataObject.voltage = voltage;
}

void SegmentTimeDataDetailed::setSegmentCurrent(const double &current)
{
    this->dataObject.current = current;
}

void SegmentTimeDataDetailed::setSegmentMode(const Data::SegmentMode &mode)
{
    this->segmentMode = mode;
}

void SegmentTimeDataDetailed::setTimeValue(const uint32_t &time)
{
    if(time > 1270000)
    {
        //we should throw an error as this is not allowed
        this->timeValue = 1270000;
    }else{
        this->timeValue = time;
    }

}

void SegmentTimeDataDetailed::resetData()
{
    setSegmentVoltage(0);
    setSegmentCurrent(0);
    setSegmentMode(Data::SegmentMode::DEAD);
    setTimeValue(0);
}

void SegmentTimeDataDetailed::updateData(const SegmentTimeDataDetailed &data)
{
    this->operator =(data);
}

Data::TypeSupplyOutput SegmentTimeDataDetailed::getSupplyOutputNumber() const
{
    return this->supplyOutput;
}

Data::RegisterDataObject SegmentTimeDataDetailed::getRegisterDataObject() const
{
    return this->dataObject;
}

double SegmentTimeDataDetailed::getSegmentVoltage() const
{
    return this->dataObject.voltage;
}

double SegmentTimeDataDetailed::getSegmentCurrent() const
{
    return this->dataObject.current;
}

Data::SegmentMode SegmentTimeDataDetailed::getSegmentMode() const
{
    return this->segmentMode;
}

uint32_t SegmentTimeDataDetailed::getTimeValue() const
{
    return this->timeValue;
}
} //end of namespace DataParameter
