#include <Arduino.h>

// 定义LED连接的GPIO引脚为引脚2
#define LED_PIN 2

// setup() - 初始化函数，程序启动时执行一次
void setup()
{
    // 设置LED_PIN为输出模式，使其可以控制LED亮灭
    pinMode(LED_PIN, OUTPUT);
}

// loop() - 主循环函数，程序启动后持续循环执行
void loop()
{
    // 将LED_PIN设置为高电平(3.3V)，点亮LED
    digitalWrite(LED_PIN, HIGH);
    // 延时1000毫秒(1秒)
    delay(1000);

    // 将LED_PIN设置为低电平(0V)，熄灭LED
    digitalWrite(LED_PIN, LOW);
    // 延时1000毫秒(1秒)
    delay(1000);
}
