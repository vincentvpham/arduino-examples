/*
LED VU meter for Arduino and Adafruit NeoPixel LEDs.

Hardware requirements:
 - Most Arduino or Arduino-compatible boards (ATmega 328P or better).
 - Adafruit Electret Microphone Amplifier (ID: 1063)
 - Adafruit Flora RGB Smart Pixels (ID: 1260)
   OR
 - Adafruit NeoPixel Digital LED strip (ID: 1138)
 - Optional: battery for portable use (else power through USB or adapter)
Software requirements:
 - Adafruit NeoPixel library

Connections:
 - 3.3V to mic amp +
 - GND to mic amp -
 - Analog pin to microphone output (configurable below)
 - Digital pin to LED data input (configurable below)
 See notes in setup() regarding 5V vs. 3.3V boards - there may be an
 extra connection to make and one line of code to enable or disable.

Written by Adafruit Industries.  Distributed under the BSD license.
This paragraph must be included in any redistribution.
*/
#include <Adafruit_NeoPixel.h>

extern Adafruit_NeoPixel strip;
extern boolean checkButton();

extern uint16_t _num_led;
extern uint8_t  _pin_led;
extern uint8_t  _pin_mic;

extern uint32_t Wheel(byte WheelPos);


void volMeter(uint8_t startColor, uint8_t endColor);
void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
void setPixelColor(uint16_t n, uint32_t c);