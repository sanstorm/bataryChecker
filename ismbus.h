#ifndef ISMBUS_H
#define ISMBUS_H
#include "types.h"
#include "SLABCP2112.h"

class ISmbus
{
public:
    ISmbus();
    virtual INT SMBus_Open()=0;
    virtual INT SMBus_Close()=0;
    virtual INT SMBus_Reset()=0;
    virtual INT SMBus_Configure()=0;
    virtual INT SMBus_Read()=0;
    virtual INT SMBus_Write()=0;
};

#endif // ISMBUS_H


