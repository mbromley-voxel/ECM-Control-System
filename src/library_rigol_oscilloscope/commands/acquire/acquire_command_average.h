#ifndef ACQUIRE_COMMAND_AVERAGE_H
#define ACQUIRE_COMMAND_AVERAGE_H

/**
\* @file  abstract_command_average.h
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

#include "abstract_acquire_command.h"

namespace rigol {
namespace commands{

ECM_CLASS_FORWARD(AcquireCommand_Average);

class AcquireCommand_Average : public AbstractAcquireCommand
{
public:
    AcquireCommand_Average();

    AcquireCommand_Average(const AcquireCommand_Average &copy);

public:

    /**
     * @brief getClone
     * @return
     */
    AbstractRigolCommand* getClone() const override;

    /**
     * @brief getClone
     * @param state
     */
    void getClone(AbstractRigolCommand** state) const override;

public:
    //!
    //! \brief operator =
    //! \param rhs
    //!
    AcquireCommand_Average& operator = (const AcquireCommand_Average &rhs)
    {
        AbstractAcquireCommand::operator =(rhs);
        return *this;
    }

    //!
    //! \brief operator ==
    //! \param rhs
    //! \return
    //!
    bool operator == (const AcquireCommand_Average &rhs)
    {
        if(!AbstractAcquireCommand::operator ==(rhs)){
            return false;
        }
        return true;
    }

    //!
    //! \brief operator !=
    //! \param rhs
    //! \return
    //!
    bool operator != (const AcquireCommand_Average &rhs) {
        return !(*this == rhs);
    }

};

} //end of namespace commands
} //end of namespace rigol

#endif // ACQUIRE_COMMAND_AVERAGE_H
