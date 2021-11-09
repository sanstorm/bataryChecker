#ifndef SBSCOMANDS_H
#define SBSCOMANDS_H

#include "ismbus.h"


class SBSComands
{
    ISmbus *smbus;
    enum sbsCommands {
        MANUFACTURER_ACCESS,        // 0x00
        REMAINING_CAPACITY_ALARM,   // 0x01
        REMAINING_TIME_ALARM,       // 0x02
        BATTERY_MODE,               // 0x03
        AT_RATE,                    // 0x04
        AT_RATE_TIME_TO_FULL,       // 0x05
        AT_RATE_TIME_TO_EMPTY,      // 0x06
        AT_RATE_OK,                 // 0x07
        TEMPERATURE,                // 0x08
        VOLTAGE,                    // 0x09
        CURRENT,                    // 0x0A
        AVERAGE_CURRENT,            // 0x0B
        MAX_ERROR,                  // 0x0C
        RELATIVE_STATE_OF_CHARGE,   // 0x0D
        ABSOLUTE_STATE_OF_CHARGE,   // 0x0E
        REMAINING_CAPACITY,         // 0x0F
        FULL_CHARGE_CAPACITY,       // 0x10
        RUN_TIME_TO_EMPTY,          // 0x11
        AVERAGE_TIME_TO_EMPTY,      // 0x12
        AVERAGE_TIME_TO_FULL,       // 0x13
        CHARGING_CURRENT,           // 0x14
        CHARGING_VOLTAGE,           // 0x15
        BATTERY_STATUS,             // 0x16
        CYCLE_COUNT,                // 0x17
        DESIGN_CAPACITY,            // 0x18
        DESIGN_VOLTAGE,             // 0x19
        SPECIFICATION_INFO,         // 0x1A
        MANUFACTURER_DATE,          // 0x1B
        SERIAL_NUMBER,              // 0x1C
        RESERVED1,                  // 0x1D
        RESERVED2,                  // 0x1E
        RESERVED3,                  // 0x1F
        MANUFACTURER_NAME,          // 0x20
        DEVICE_NAME,                // 0x21
        DEVICE_CHEMISTRY,           // 0x22
        MANUFACTURER_DATA           // 0x23
    };
public:
    SBSComands();    
    int getManufacturerName();
};

#endif // SBSCOMANDS_H
