#include "cp2112smbus.h"

CP2112Smbus::CP2112Smbus(){}

INT SMBus_Open(HID_SMBUS_DEVICE *device){
    INT                     deviceNum = -1;
    DWORD                   numDevices;
    HID_SMBUS_DEVICE_STR    deviceString;
    HID_SMBUS_STATUS        status;

    // Search for device
    if(HidSmbus_GetNumDevices(&numDevices, VID, PID) == HID_SMBUS_SUCCESS)
    {
        for (DWORD i = 0; i < numDevices; i++)
        {
            if(HidSmbus_GetString(i, VID, PID, deviceString, HID_SMBUS_GET_SERIAL_STR) == HID_SMBUS_SUCCESS)
            {
                deviceNum = i;
                break;
            }
        }
    }

    // Device not found
    if(deviceNum == -1)
    {
        return -1;
    }
    // Device found
    else
    {
        // Attempt open
        status = HidSmbus_Open(device, deviceNum, VID, PID);
        // Check status
        if(status != HID_SMBUS_SUCCESS)
        {
            return -1;
        }
    }

    // Success
    return 0;
}
INT SMBus_Close(){
    return 1;
}
INT SMBus_Reset(){
    return 1;
}
INT SMBus_Configure(){
    return 1;
}

INT SMBus_Read(){
    return 1;
}

INT SMBus_Write(){
    return 1;
}
