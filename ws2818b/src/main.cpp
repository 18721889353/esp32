#include <Arduino.h>
#include <FastLED.h>

// LED 配置常量
#define LED_PIN 21    // 数据引脚
#define NUM_LEDS 1    // LED 数量
#define BRIGHTNESS 64 // 亮度 (0-255)
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB  // WS2812B 通常是 GRB 顺序
#define HUE_STEP 7       // 彩虹色调步长
#define LOOP_DELAY_MS 20 // 循环延迟(毫秒)

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop()
{
  // 内置的彩虹函数
  static uint8_t startIndex = 0;
  fill_rainbow(leds, NUM_LEDS, startIndex, HUE_STEP); // 7 是色调差
  FastLED.show();
  startIndex++;
  delay(LOOP_DELAY_MS);
}
