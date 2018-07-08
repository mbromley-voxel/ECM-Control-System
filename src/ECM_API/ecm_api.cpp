#include "ecm_api.h"

ECM_API::ECM_API()
{
    m_Rigol = new RigolOscilliscope();

    m_Munk = new MunkPowerSupply();

    m_Galil = new GalilMotionController();
    connect(m_Galil,SIGNAL(signal_MotionControllerCommunicationUpdate(common::comms::CommunicationUpdate)),
            this,SLOT(slot_MotionControllerCommunicationUpdate(common::comms::CommunicationUpdate)));

    m_Sensoray = new Sensoray();

    m_Pump = new Westinghouse510(m_Sensoray,03);

    m_Log = new ECMLogging();
}

void ECM_API::slot_MotionControllerCommunicationUpdate(const common::comms::CommunicationUpdate &update)
{
    if(update.getUpdateType() == common::comms::CommunicationUpdate::UpdateTypes::CONNECTED)
        m_Galil->initializeMotionController();
}
