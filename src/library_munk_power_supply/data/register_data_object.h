#ifndef REGISTER_DATA_OBJECT_H
#define REGISTER_DATA_OBJECT_H

#include <stdint.h>
#include <string>
#include <stdexcept>
#include <vector>

namespace Data
{

//!
//! \brief The RegisterDataObject class
//!
class RegisterDataObject
{
public:
    //!
    //! \brief RegisterDataObject
    //!
    RegisterDataObject();

    //!
    //! \brief RegisterDataObject
    //! \param voltage
    //! \param current
    //!
    RegisterDataObject(const double &voltage, const double &current);

    //!
    //! \brief RegisterDataObject
    //! \param obj
    //!
    RegisterDataObject(const RegisterDataObject &obj);

public:
    //!
    //! \brief operator =
    //! \param rhs
    //!
    void operator =(const RegisterDataObject &rhs);

    //!
    //! \brief operator <
    //! \param rhs
    //! \return
    //!
    bool operator< (const RegisterDataObject &rhs) const;

    //!
    //! \brief operator ==
    //! \param rhs
    //! \return
    //!
    bool operator== (const RegisterDataObject &rhs) const;

    //!
    //! \brief operator !=
    //! \param rhs
    //! \return
    //!
    bool operator!= (const RegisterDataObject &rhs) const;

public:
    //!
    //! \brief voltage
    //!
    double voltage;

    //!
    //! \brief current
    //!
    double current;
};

} //end of namespace Data

#endif // REGISTER_DATA_OBJECT_H