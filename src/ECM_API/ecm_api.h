#ifndef ECM_API_H
#define ECM_API_H

#include <QObject>

#include "ecm_api_global.h"
#include "common/ecm_devices.h"

#include "library_munk_power_supply/munk_power_supply.h"
#include "library_galilMotionController/galil_motion_controller.h"
#include "library_sensoray/sensoray.h"
#include "library_rigol_oscilloscope/rigol_oscilliscope.h"
#include "library_westinghouse510/westinghouse_510.h"

class ECM_APISHARED_EXPORT ECM_API: public QObject
{
    Q_OBJECT

public:
    ECM_API();

    ~ECM_API() = default;

public:

    RigolOscilliscope* m_Rigol;

    MunkPowerSupply* m_Munk;

    GalilMotionController* m_Galil;

    Sensoray* m_Sensoray;

    Westinghouse510* m_Pump;
};

#endif // ECM_API_H