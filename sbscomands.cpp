#include "sbscomands.h"
#include "fakesmbus.h"

SBSComands::SBSComands()
{
    this->smbus = new FakeSmbus();
}

int SBSComands::getManufacturerName(){
    return this->smbus->SMBus_Write(MANUFACTURER_NAME);
}
