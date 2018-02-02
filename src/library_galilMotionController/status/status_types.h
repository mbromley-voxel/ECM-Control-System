#ifndef STATUS_TYPES_H
#define STATUS_TYPES_H

#include <vector>
#include <string>
#include <stdexcept>

/**
\* @file  status_types.h
\*
\* @author Kenneth Kroeger
\*
\* @date
\*
\* @section PROJECT
\*   This is a part of the Voxel Innovation's ECM Control System. The containing libraray is to control the Galil Motion Controller.
\*
\* @section DESCRIPTION
\*
\*
\*/

enum class StatusTypes{
    STATUS_POSITION = 0,
    STATUS_AXISMOTION = 1,
    STATUS_MOTOREN = 2,
    STATUS_STOPCODE = 3,
    STATUS_SWITCH = 4,
    STATUS_TELLINPUTS = 5
};




#endif // STATUS_TYPES_H
