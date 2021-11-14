#ifndef SBSCOMANDS_H
#define SBSCOMANDS_H

#include "ismbus.h"
#include "fakesmbus.h"


class SBSComands
{
    ISmbus *smbus;

    enum {
        CP2112,
        STM32,
        MSP430,
        ARDUINO,
        FAKE,
    };
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
    char* manufacturerName[12];
    char* deviceName[8];
    char* deviceChemistry[5];
    char* manufacturerData[15];
    char* authenticate[21];
    int adapter;
    char* buffer[1];
    unsigned int remainingCapacityAlarml;
    unsigned int remainingTimeAlarm;
    char batteryMode[1];
    signed int atRate;
    unsigned int atRateTimeToFull;
    unsigned int atRateTimeToEmpty;
    unsigned int atRateOK;
    unsigned int temperature;
    unsigned int  voltage;
    signed int current;
    signed int averageCurrent;
    unsigned int maxError;
    unsigned int relativeStateOfCharge;
    unsigned int absoluteStateOfCharge;
    unsigned int remainingCapacity;
    unsigned int fullChargeCapacity;
    unsigned int runTimeToEmpty;
    unsigned int averageTimeToEmpty;
    unsigned int averageTimeToFull;
    unsigned int chargingCurrent;
    unsigned int chargingVoltage;
    unsigned int batteryStatus2;
    unsigned int cycleCount;
    unsigned int designCapacity;
    unsigned int designVoltage;
    char* specificationInfo[1];
    unsigned int manufactureDate;
    char* serialNumber[1];
    unsigned intCellVoltage4;
    unsigned intCellVoltage3;
    unsigned intCellVoltage2;
    unsigned intCellVoltage1;





    int setAdapter();
    SBSComands();    
    int readManufacturerAccess();
    int writeManufacturerAccess();
    int readRemainingCapacityAlarm();
    int writeRemainingCapacityAlarm();
    int readRemainingTimeAlarm();
    int writeRemainingTimeAlarm();
    int readBatteryMaode();
    int writeBattaryMode();
    int readAtRate();
    int writeAtRate();
    int readAtRateTimeToFull();
    int readAtRateTimeToEmpty();
    //If AtRate function returns >0, AtRateOK always returns TRUE.
    int readRateOk();
    // This read-word function returns an unsigned integer value of the temperature in units of 0.1°K,
    int readTemperature();
    //  This read-word function returns an unsigned integer value of the sum of the individual cell voltage measurements in mV with a range of 0 to 20000 mV.
    int readVoltage();
    //This read-word function returns a signed integer value of the measured current being supplied (or accepted) by the battery in mA, with a range of –32,768 to 32,767. A positive value indicates charge current and a negative value indicates discharge.
    int readCurrent();
    int readAverageCurrent();
    int readMaxError();
    int readRelativeStateOfCharge();
    int readAbsoluteStateOfCharge();
    int readRemainingCapacity();
    int writeRemaingCapacity();
    int readFullChargeCapacity();
    int readtimeToEmpty();
    int readAverageTimeToEmpty();
    int readAverageTimeToFull();
    int readChargingCurrent();
    int readChargingVoltage();
    int readBataryStatus();
    int readCycleCount();
    int writeCycleCount();
    int readDesignCapacity();
    int writeDesignCapasity();
    int readDesignVoltage();
    int writeDesignVoltage();
    int readSpecificationInfo();
    int writeSpecificationInfo();
    int readManufacturerDate();
    int writeManufacturerDate();
    int readSerialNumber();
    int writeSerialNumber();
    int readDeviceName();
    int writeDeviceName();
    int readDeviceChemistry();
    int writeDeviceChemistry();
    int readManufacturerData();
    int writeManufacturerData();
    int readAuthenticate();
    int writeAuthenticate();
    int readCellVoltage1();
    int readCellVoltage2();
    int readCellVoltage3();
    int readCellVoltage4();
    int readManufacturerName();
    int writeManufacturerName();
};

#endif // SBSCOMANDS_H
