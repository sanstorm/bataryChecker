#ifndef FAKESMBUS_H
#define FAKESMBUS_H

#include "ismbus.h"

class FakeSmbus : public ISmbus
{
public:
    FakeSmbus();
    int SMBus_Open();
    int SMBus_Close();
    int SMBus_Reset();
    int SMBus_Configure();
    int SMBus_Read();
    int SMBus_Write();
};

#endif // FAKESMBUS_H
