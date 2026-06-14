#include "Freenove_WS2812_Lib_for_ESP32.h"

#define LEDS_PINS 2
#define LEDS_COUNT 8
#define CHANNEL 0

Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PINS, CHANNEL, TYPE_GRB);

void setup() {
  strip.begin();
}

void loop() {
  for(int j=0; j < 255; j+=2){
    for(int i=0; i < LEDS_COUNT;i++){
      strip.setLedColorData(i, strip.Wheel((i*256 / LEDS_COUNT +j) & 255));
    }
    strip.setBrightness(20);
    strip.show();
    delay(5);
  }

}
