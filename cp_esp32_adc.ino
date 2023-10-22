

#include "public.h"


#define CP_GPIO 32

//定义全局变量
float adc_vol=0;


void setup() {
  //串口0配置
  Serial.begin(115200);
  
}

void loop() {
  adc_vol=3.3*(float)analogRead(CP_GPIO)/4095;//读取ADC值
  Serial.print("ADC检测电压：");
  Serial.print(adc_vol);
  Serial.println("V");
  delay(500);
}
