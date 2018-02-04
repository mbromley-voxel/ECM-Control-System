#ifndef ABSTRACT_ACQUIRE_COMMAND_H
#define ABSTRACT_ACQUIRE_COMMAND_H

/**
\* @file  abstract_acquire_command.h
\*
\* @author Kenneth Kroeger
\*
\* @date
\*
\* @section PROJECT
\*   This is a part of the Voxel Innovation's ECM Control System.
\*
\* @section DESCRIPTION
\*
\*
\*/

#include <string>

#include "common/class_forward.h"
#include "commands/abstract_rigol_command.h"

#include "data/type_acquire_commands.h"
#include "data/type_read_write.h"

namespace rigol {
namespace commands{

ECM_CLASS_FORWARD(AbstractAcquireCommand);

class AbstractAcquireCommand : public AbstractRigolCommand
{
public:
    AbstractAcquireCommand(const data::AcquireType &acquire, const data::ReadWriteType &rw = data::ReadWriteType::WRITE):
        AbstractRigolCommand(data::CommandTypes::COMMAND_MEASURE,rw)
    {
        this->acquireType = acquire;
    }

    AbstractAcquireCommand(const AbstractAcquireCommand& copy):
        AbstractRigolCommand(copy)
    {
        this->acquireType = copy.acquireType;
    }


    virtual ~AbstractAcquireCommand() = default;

    /**
     *
     */
    template <class T>
    const T *as() const
    {
        //ensure that we are attempting to cast it to a type of state
        return static_cast<const T *>(this);
    }

    /**
     *
     */
    template <class T>
    T *as()
    {
        //ensure that we are attempting to cast it to a type of state
        return static_cast<T *>(this);
    }

    /**
     * @brief getClone
     * @return
     */
    virtual AbstractAcquireCommand* getClone() const = 0;

    /**
     * @brief getClone
     * @param state
     */
    virtual void getClone(AbstractAcquireCommand** state) const = 0;

public:
    virtual data::AcquireType getAcquisitionType() const
    {
        return acquireType;
    }

public:
    //!
    //! \brief operator =
    //! \param rhs
    //!
    AbstractAcquireCommand& operator = (const AbstractAcquireCommand &rhs)
    {
        AbstractRigolCommand::operator =(rhs);
        this->acquireType = rhs.acquireType;
        return *this;
    }

    //!
    //! \brief operator ==
    //! \param rhs
    //! \return
    //!
    bool operator == (const AbstractAcquireCommand &rhs)
    {
        if(!AbstractRigolCommand::operator ==(rhs)){
            return false;
        }
        if(this->acquireType != rhs.acquireType){
            return false;
        }
        return true;
    }

    //!
    //! \brief operator !=
    //! \param rhs
    //! \return
    //!
    bool operator != (const AbstractAcquireCommand &rhs) {
        return !(*this == rhs);
    }


protected:
    data::AcquireType acquireType;
};

} //end of namespace commands
} //end of namespace rigol

#endif // ABSTRACT_ACQUIRE_COMMAND_H
