#ifndef MUNK_POWER_SUPPLY_H
#define MUNK_POWER_SUPPLY_H

#include "library_munk_power_supply_global.h"

class LIBRARY_MUNK_POWER_SUPPLYSHARED_EXPORT MunkPowerSupply
{

public:
    MunkPowerSupply();

private:
    unsigned int CRC16(const int &cnt);

    char Buffer[128];

};

#endif // MUNK_POWER_SUPPLY_H
