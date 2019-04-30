#ifndef STATE_ECM_UPLOAD_MOTION_VARIABLES_H
#define STATE_ECM_UPLOAD_MOTION_VARIABLES_H

#include "states/state_abstract_ecm_process.h"
#include "commands/ecm_command_execute_collection.h"

/**
\* @file  state_ecm_touchoff.h
\*
\* @author Kenneth Kroeger
\*
\* @date
\*
\* @section PROJECT
\*   This is a part of the Voxel Innovation's ECM Control System.
\*
\* @section DESCRIPTION
\*/

namespace ECM{
namespace API {

class ECMState_UploadPowerSupply;
class ECMState_UploadFailed;

ECM_CLASS_FORWARD(ECMState_UploadMotionVariables);

class ECMState_UploadMotionVariables : public AbstractStateECMProcess
{
public:
    ECMState_UploadMotionVariables();

public:
    AbstractStateECMProcess* getClone() const override;

    void getClone(AbstractStateECMProcess** state) const override;

public:
    hsm::Transition GetTransition() override;

public:
    void OnEnter() override;
    void Update() override;
    void OnExit() override;

    void stopProcess() override;

public:
    void OnEnter(ECMCommand_AbstractProfileConfigPtr config);

private:
    ECMCommand_AbstractProfileConfigPtr m_Config;
};

} //end of namespace API
} //end of namespace ECM

#endif // STATE_ECM_UPLOAD_MOTION_VARIABLES_H
