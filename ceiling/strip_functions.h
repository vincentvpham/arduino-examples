#include <Adafruit_NeoPixel.h>

extern Adafruit_NeoPixel strip;
extern boolean pushed;
extern uint8_t _pin_pot;
extern int lightMode;

void buttonPushed();
void setBrightness();

void colorWipe(uint32_t c, uint8_t wait);
void pulse(uint32_t c, int w);
void rainbow(uint8_t wait);
void rainbowCycle(uint8_t wait);
void rainbowSingle(int wait);

uint32_t Wheel(byte WheelPos);
