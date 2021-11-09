#ifndef ISMBUS_H
#define ISMBUS_H

class ISmbus
{
public:
    virtual int SMBus_Open()=0;
    virtual int SMBus_Close()=0;
    virtual int SMBus_Reset()=0;
    virtual int SMBus_Configure()=0;
    virtual int SMBus_Read()=0;
    virtual int SMBus_Write(int sbs)=0;
};

#endif // ISMBUS_H


