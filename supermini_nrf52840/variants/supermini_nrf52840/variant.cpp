#include "variant.h"

// Pin descriptions
//const PinDescription g_APinDescription[PINS_COUNT] = {
  //  { NRF_GPIO_PIN_MAP(0, 8),  NRF_GPIO_PIN_MAP(0, 8), NULL, NULL, NULL },  // D0 - P0.08
    //{ NRF_GPIO_PIN_MAP(0, 6),  NRF_GPIO_PIN_MAP(0, 6), NULL, NULL, NULL },  // D1 - P0.06
    //{ NRF_GPIO_PIN_MAP(0, 17), NRF_GPIO_PIN_MAP(0, 17), NULL, NULL, NULL }, // D2 - P0.17
    //{ NRF_GPIO_PIN_MAP(0, 20), NRF_GPIO_PIN_MAP(0, 20), NULL, NULL, NULL }, // D3 - P0.20
    //{ NRF_GPIO_PIN_MAP(0, 22), NRF_GPIO_PIN_MAP(0, 22), NULL, NULL, NULL }, // D4 - P0.22
    //{ NRF_GPIO_PIN_MAP(0, 24), NRF_GPIO_PIN_MAP(0, 24), NULL, NULL, NULL }, // D5 - P0.24
    //{ NRF_GPIO_PIN_MAP(1, 0),  NRF_GPIO_PIN_MAP(1, 0),  NULL, NULL, NULL }, // D6 - P1.00
    //{ NRF_GPIO_PIN_MAP(0, 11), NRF_GPIO_PIN_MAP(0, 11), NULL, NULL, NULL }, // D7 - P0.11
    //{ NRF_GPIO_PIN_MAP(1, 4),  NRF_GPIO_PIN_MAP(1, 4),  NULL, NULL, NULL }, // D8 - P1.04
    //{ NRF_GPIO_PIN_MAP(1, 6),  NRF_GPIO_PIN_MAP(1, 6),  NULL, NULL, NULL }, // D9 - P1.06
    //{ NRF_GPIO_PIN_MAP(0, 31), NRF_GPIO_PIN_MAP(0, 31), NULL, NULL, NULL }, // D21 - P0.31
    //{ NRF_GPIO_PIN_MAP(0, 29), NRF_GPIO_PIN_MAP(0, 29), NULL, NULL, NULL }, // D20 - P0.29
    //{ NRF_GPIO_PIN_MAP(0, 2),  NRF_GPIO_PIN_MAP(0, 2),  NULL, NULL, NULL }, // D19 - P0.02
    //{ NRF_GPIO_PIN_MAP(1, 15), NRF_GPIO_PIN_MAP(1, 15), NULL, NULL, NULL }, // D18 - P1.15
    //{ NRF_GPIO_PIN_MAP(1, 13), NRF_GPIO_PIN_MAP(1, 13), NULL, NULL, NULL }, // D15 - P1.13
    //{ NRF_GPIO_PIN_MAP(1, 11), NRF_GPIO_PIN_MAP(1, 11), NULL, NULL, NULL }, // D14 - P1.11
    //{ NRF_GPIO_PIN_MAP(0, 10), NRF_GPIO_PIN_MAP(0, 10), NULL, NULL, NULL }, // D16 - P0.10
    //{ NRF_GPIO_PIN_MAP(0, 9),  NRF_GPIO_PIN_MAP(0, 9),  NULL, NULL, NULL }, // D10 - P0.09
//};

// Multi-Function Shield pin mapping
extern const uint32_t g_ADigitalPinMap[] = {
    8, 6, 17, 20, 22, 24, 100, 11, 104, 106, 10, 31, 29, 2, 115, 113, 111, 9,
};

// UART objects
//Uart Serial(NRF_UART0, PIN_SERIAL_RX, PIN_SERIAL_TX);

// Board initialization
void initVariant() {
    // Ensure 3.3V VCC is controlled properly
    //pinMode(PIN_LED, OUTPUT);
    //digitalWrite(PIN_LED, HIGH); // Enable 3.3V power by default
}
