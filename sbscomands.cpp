#include "sbscomands.h"


SBSComands::SBSComands()
{


}
int SBSComands::setAdapter(){
    switch (this->adapter){
    case CP2112:
        //this->smbus = new CP2112Smbus();
        this->smbus = new FakeSmbus();
        break;
    case STM32:
        //this->smbus = new STM32Smbus();
        this->smbus = new FakeSmbus();
        break;
    case MSP430:
        //this->smbus = new MSPSmbus();
        this->smbus = new FakeSmbus();
        break;
    case ARDUINO:
        //this->smbus = new ARDUINOSmbus();
        this->smbus = new FakeSmbus();
        break;
    case FAKE:
        this->smbus = new FakeSmbus();
        break;
    default:
        this->smbus = new FakeSmbus();
    }
    return this->adapter;
};

int SBSComands::getManufacturerName(){
    return this->smbus->SMBus_Write(MANUFACTURER_NAME);
}
