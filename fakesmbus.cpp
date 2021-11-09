#include "fakesmbus.h"

FakeSmbus::FakeSmbus()
{

}

int FakeSmbus::SMBus_Open(){
    return 1;
}

int FakeSmbus::SMBus_Close(){
    return 1;
}
int FakeSmbus::SMBus_Reset(){
    return 1;
}
int FakeSmbus::SMBus_Configure(){
    return 1;
}
int FakeSmbus::SMBus_Read(){
    return 1;
}
int FakeSmbus::SMBus_Write(int sbs){
    return sbs;
}
