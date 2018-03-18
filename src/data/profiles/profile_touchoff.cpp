#include "profile_touchoff.h"

Profile_Touchoff::Profile_Touchoff(const std::string &name, const std::string &tag):
    MotionProfile(name,tag)
{

}

Profile_Touchoff Profile_Homing::getType() const
{
    return ProfileType::TOUCHOFF;
}

void Profile_Touchoff::setCurrentCode(const TOUCHOFFProfileCodes &code)
{
    this->currentCode = code;
}

TOUCHOFFProfileCodes Profile_Touchoff::getCurrentCode() const
{
    return this->currentCode;
}
