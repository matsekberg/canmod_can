#ifndef CANMOD_PINS_H
#define CANMOD_PINS_H

#ifdef CANMOD_MINI_V3
  #define BOARD_OK
  #define CM_PIN_TWIT (gpio_num_t)17
  #define CM_PIN_TWIR (gpio_num_t)16
  #define CM_PIN_CS (gpio_num_t)5
  #define CM_PIN_INT (gpio_num_t)25
  #define CM_PIN_MOSI (gpio_num_t)23
  #define CM_PIN_MISO (gpio_num_t)19
  #define CM_PIN_SCK (gpio_num_t)18

#elif CANMOD_MINI_V2
  #define BOARD_OK
  #define CM_PIN_TWIT (gpio_num_t)17
  #define CM_PIN_TWIR (gpio_num_t)16
  #define CM_PIN_CS (gpio_num_t)5
  #define CM_PIN_INT (gpio_num_t)25
  #define CM_PIN_MOSI (gpio_num_t)23
  #define CM_PIN_MISO (gpio_num_t)19
  #define CM_PIN_SCK (gpio_num_t)18

#elif CANMOD_ULTRA_V1
  #define BOARD_OK
  #define CM_PIN_TWIT (gpio_num_t)17
  #define CM_PIN_TWIR (gpio_num_t)16

#else
#error "No board was defined: CANMOD_MINI_V3, CANMOD_MINI_V2, CANMOD_ULTRA_V1"
#endif

#endif