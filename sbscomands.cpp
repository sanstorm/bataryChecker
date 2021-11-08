#include "sbscomands.h"
#include "fakesmbus.h"

SBSComands::SBSComands()
{
    this->smbus = new FakeSmbus();
}

int SBSComands::getManufacturer(){
    this->smbus->SMBus_Write();
    return 1;
}
