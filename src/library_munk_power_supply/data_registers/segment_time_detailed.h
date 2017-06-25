#ifndef SEGMENT_TIME_DETAILED_H
#define SEGMENT_TIME_DETAILED_H

#include <string>
#include <vector>

#include "abstract_parameter.h"
#include "segment_time_data_detailed.h"
#include "segment_time_general.h"

namespace DataParameter
{
//!
//! \brief The SegmentTimeDetailed class
//!
class SegmentTimeDetailed
{
public:
    //!
    //! \brief SegmentTimeDetailed
    //!
    SegmentTimeDetailed();

    //!
    //! \brief SegmentTimeDetailed
    //! \param address
    //!
    SegmentTimeDetailed(const int &address);

    //!
    //! \brief SegmentTimeDetailed
    //! \param obj
    //!
    SegmentTimeDetailed(const SegmentTimeDetailed &obj);

public:

    void setSlaveAddress(const int &address);

    int getSlaveAddress() const;

    //!
    //! \brief appendRegisterData
    //! \param data
    //!
    void appendRegisterData(const SegmentTimeDataDetailed &data);

    //!
    //! \brief updateRegisterData
    //! \param registerIndex
    //! \param data
    //!
    void updateRegisterData(const int &registerIndex, const SegmentTimeDataDetailed &data);

    //!
    //! \brief getRegisterData
    //! \return
    //!
    std::vector<DataParameter::SegmentTimeDataDetailed> getRegisterData() const;

    //!
    //! \brief initializeData
    //!
    void initializeData();

public:

    //!
    //! \brief operator =
    //! \param rhs
    //!
    void operator = (const SegmentTimeDetailed &rhs)
    {
        this->slaveAddress = rhs.slaveAddress;
        this->detailedRegisterData = rhs.detailedRegisterData;
    }

    //!
    //! \brief operator ==
    //! \param rhs
    //! \return
    //!
    bool operator == (const SegmentTimeDetailed &rhs) {
        if(this->slaveAddress != rhs.slaveAddress){
            return false;
        }
        if(this->detailedRegisterData != rhs.detailedRegisterData){
            return false;
        }
        return true;
    }

    //!
    //! \brief operator !=
    //! \param rhs
    //! \return
    //!
    bool operator != (const SegmentTimeDetailed &rhs) {
        return !(*this == rhs);
    }

private:

    //!
    //! \brief slaveAddress
    //!
    int slaveAddress;

    //!
    //! \brief detailedRegisterData
    //!
    std::vector<DataParameter::SegmentTimeDataDetailed> detailedRegisterData;
};

} //end of namespace MunkPowerSupply

#endif // SEGMENT_TIME_DETAILED_H
