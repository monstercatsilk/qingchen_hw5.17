#include <Arduino.h>

#define LED1 4
#define LED2 5

void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop(){
  if (Serial.available()) {
    char command = Serial.read();
  if(command=='1'){
    digitalWrite(LED1,HIGH);
    Serial.println("LED1亮");
  }
  else if(command=='2'){
    digitalWrite(LED1,LOW);
    Serial.println("LED1灭");
  }
  else if(command=='3'){
    digitalWrite(LED2,HIGH);
    Serial.println("LED2亮");
  }
  else if(command=='4'){
    digitalWrite(LED2,LOW);
    Serial.println("LED2灭");
  }
  else{
    Serial.println("没有指令");
  }
  delay(1000);
}
}