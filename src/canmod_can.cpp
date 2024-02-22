#include "canmod_can.h"

//The objects in here are defined weak now. If you're using an EVTV board you need to do nothing.
//If you're using something else that uses different pins then just go ahead and redefine 
//the objects with whichever pins you need. 

//Set these to the proper pin numbers for you board. Set by default to correct for EVTV ESP32-Due
             //rxpin       txpin
//ESP32CAN __attribute__((weak)) CAN0(CM_PIN_TWIR, CM_PIN_TWIT) ;

//Select and uncomment the proper module you've got connected via SPI
            //CS, INT
//MCP2517FD __attribute__((weak)) CAN1(5, 27) ;
//MCP2515 __attribute__((weak)) CAN1(CM_PIN_CS, CM_PIN_INT, CM_PIN_SCK, CM_PIN_MOSI, CM_PIN_MISO) ;