#ifndef WESTINGHOUSE_510_H
#define WESTINGHOUSE_510_H

#include <QObject>
#include <iostream>

#include "library_westinghouse510_global.h"

#include "common/comms/abstract_communication.h"

#include "data_registers/register_components.h"

#include "westinghouse_510_state.h"

namespace westinghousePump{

class LIBRARY_WESTINGHOUSE510SHARED_EXPORT Westinghouse510 : public QObject
{
    Q_OBJECT
public:
    Westinghouse510(const common::comms::ICommunication *commsObject);

    ~Westinghouse510() = default;

    void updatePumpFlowRate(const registers::Register_FlowRate &desRate);

    void updatePumpOperations(const registers::Register_OperationSignal &desOps);

signals:
    void signal_PumpFlowUpdated(const double &value);
    void signal_PumpOperating(const bool &value);

private slots:
    void slot_SerialPortConnectionUpdate(const common::comms::CommunicationUpdate &update) const;

private:
    const common::comms::ICommunication* m_Comms;
    Westinghouse510_State* m_State;
};

} //end of namespace westinghouse
#endif // WESTINGHOUSE_510_H
