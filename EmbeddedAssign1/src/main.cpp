#include <Arduino.h>

const int a[6]={4,5,12,13,26,25};

void setup(){
  for(int i=0;i<6;i++){
    pinMode(a[i],OUTPUT);
  }
}

void loop(){
  for(int i=0;i<6;i++){
    digitalWrite(a[i],HIGH);
    delay(500);
    digitalWrite(a[i],LOW);
    delay(500);
  }
}