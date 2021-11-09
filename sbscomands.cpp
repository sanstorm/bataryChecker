#include "sbscomands.h"
#include "fakesmbus.h"

SBSComands::SBSComands()
{
    this->smbus = new FakeSmbus();
}

int SBSComands::getManufacturerName(){
    this->smbus->SMBus_Write(MANUFACTURER_NAME);
    return 1;
}
