#ifndef _VARIANT_SUPERMINI_NRF52840_
#define _VARIANT_SUPERMINI_NRF52840_

#include "nrf.h"

#define USE_LFXO      // Board uses 32khz crystal for LF

// Number of pins defined in PinDescription array
#define PINS_COUNT           (22u)
#define NUM_DIGITAL_PINS     (22u)
#define NUM_ANALOG_INPUTS    (0u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED              (22) // P0.13 - controls 3.3V VCC

#define LED_BUILTIN          PIN_LED
//#define LED_CONN             PIN_LED2

//#define LED_RED              PIN_LED1
#define LED_BLUE             PIN_LED

#define LED_STATE_ON         1         // State when LED is litted

// Battery pin
#define PIN_BATTERY          (0u) // Define if needed

// Digital pins
#define D0  (0u)  // P0.08
#define D1  (1u)  // P0.06
#define D2  (2u)  // P0.17
#define D3  (3u)  // P0.20
#define D4  (4u)  // P0.22
#define D5  (5u)  // P0.24
#define D6  (6u)  // P1.00
#define D7  (7u)  // P0.11
#define D8  (8u)  // P1.04
#define D9  (9u)  // P1.06
#define D10 (10u) // P0.09
#define D14 (14u) // P1.11
#define D15 (15u) // P1.13
#define D16 (16u) // P0.10
#define D18 (18u) // P1.15
#define D19 (19u) // P0.02
#define D20 (20u) // P0.29
#define D21 (21u) // P0.31

// UART definitions
#define PIN_SERIAL_RX        (D0) //might be unnecessary
#define PIN_SERIAL_TX        (D1) //might be unnecessary, compiler looks for serial1 it appears
#define PIN_SERIAL1_RX        (D0)
#define PIN_SERIAL1_TX        (D1)

// I2C definitions
#define PIN_WIRE_SDA         (D2)
#define PIN_WIRE_SCL         (D3)

// SPI definitions
#define PIN_SPI_MISO         (D4)
#define PIN_SPI_MOSI         (D5)
#define PIN_SPI_SCK          (D6)

#endif // _VARIANT_SUPERMINI_NRF52840_