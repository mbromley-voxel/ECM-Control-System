#include "spii_motion_controller.h"


SPIIMotionController::SPIIMotionController()
{
doubleValue=0;
if(!acsc_GetAxesCount(Handle,&Value,NULL))
{
    printf("acsc_GetAxesCount():ErrorOccurred-%d\n",acsc_GetLastError());
}

doubleValue=0;if(!acsc_GetDBufferIndex(Handle,&Value,NULL)){printf("acsc_GetDBufferIndex():ErrorOccurred-%d\n",acsc_GetLastError());return;}

}
