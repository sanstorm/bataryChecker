#ifndef CP2112SMBUS_H
#define CP2112SMBUS_H

#include "types.h"
#include "SLABCP2112.h"

#define VID 0x10C4
#define PID 0xEA90

class CP2112Smbus
{
public:
    CP2112Smbus();
    int SMBus_Open(HID_SMBUS_DEVICE *device);
};
#endif // CP2112SMBUS_H
