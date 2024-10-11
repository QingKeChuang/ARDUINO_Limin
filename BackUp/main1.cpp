#include <FastLED.h>
#define NUM_LEDS 7 // 定义 led 数量
#define DATA_PIN 3 // 定义 开发板的IO 3 为数据引脚

CRGB leds[NUM_LEDS]; // 定义CRGB的led等数组

void setup() {
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void singlelight_breath(int n)
{
    int i=0;
    int value=1;
    do
    {
        if(i==128)
        {
            value=-1;
        }
        leds[0] = CHSV( 60, 40, i);
        FastLED.show();
        delay(3);
        i+=value;
    }
    while(i!=0);

}
void loop() {
    singlelight_breath(0);
    // int h = 0;
    // for(int j = 0; j< 255; j++) {
    //     for (int i = 0; i < NUM_LEDS; i++) {
    //         leds[i] = CHSV( (h + (255 / NUM_LEDS) * i), 255, j); //用HSV色彩空间，不断改变H即可
    //         FastLED.show();
    //     }
    //     delay(1);
    //     h = (h + 2) % 255;
    // }
    // 第一个led灯闪烁白色
    // leds[0] = CRGB::White; // 序号为0的led设置白色，点亮
    // FastLED.show();
    // delay(500);
    // leds[0] = CRGB::Black; // 序号为0的led设置黑色，熄灭
    // FastLED.show();
    // delay(500);
    //
    // delay(500);

    // 每一个led逐个闪烁绿色
    // for(int i = 0; i < NUM_LEDS; i++ ) {
    //     leds[i] = CRGB::Green;
    //     FastLED.show();
    //     delay(100);
    //     leds[i] = CRGB::Black;
    //     FastLED.show();
    //     delay(100);
    // }
    //
    // delay(1000);
    //
    // // 整个灯条 彩虹色渐变
    // int h = 0;
    // for(int j = 0; j< 255; j++) {
    //     for (int i = 0; i < NUM_LEDS; i++) {
    //         leds[i] = CHSV( (h + (255 / NUM_LEDS) * i), 255, 255); //用HSV色彩空间，不断改变H即可
    //         FastLED.show();
    //     }
    //     delay(1);
    //     h = (h + 2) % 255;
    // }
    //
    // // 整个灯条熄灭
    // for(int i = 0; i < NUM_LEDS; i++ ){
    //     leds[i] = CRGB::Black;
    // }
    // FastLED.show();
    //
    // delay(1000);
}