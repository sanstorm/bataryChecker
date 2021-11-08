#ifndef SBSCOMANDS_H
#define SBSCOMANDS_H

#include "ISmbus.h"


class SBSComands
{
    ISmbus *smbus;
public:
    SBSComands();    
    int getManufacturer();
};

#endif // SBSCOMANDS_H
