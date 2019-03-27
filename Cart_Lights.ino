#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 240

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 6
// Define the array of leds
CRGB leds[NUM_LEDS];

const CRGB ORANGE = CRGB(255, 38.25, 0);
const CRGB RED = CRGB(0,255,0);

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}
void loop() { 
  for (int i=0; i<NUM_LEDS; i++) {
    if (i % 2 == 0) {
      leds[i] = ORANGE;
    } else {
      leds[i] = CRGB::Black;
    }
  }
  FastLED.show();
  delay(1000);
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  delay(1000);
  
}
  /*
  //fill_solid(leds, NUM_LEDS, ORANGE);
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
  delay (1000);
  fill_solid(leds, NUM_LEDS, RED);
  FastLED.show();
  delay(1000);
*/


