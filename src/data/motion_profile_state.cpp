#include "motion_profile_state.h"

MotionProfile::MotionProfile(const std::string &name, const std::string &tag):
    profileName(name), profileTag(tag)
{

}

MotionProfileState::MotionProfileState(const ProfileType &type):
    profileType(type)
{

}
void MotionProfileState::ConstructProfileState(const ProfileType &type, const std::string &name, const std::string &tag)
{

}

