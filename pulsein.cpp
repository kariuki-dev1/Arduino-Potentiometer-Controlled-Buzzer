#include <Arduino.h>

int pin = 8;

unsigned long pulseTime;
 
void setup(){
    Serial.begin(9600);
    pinMode(pin, INPUT);

}
void loop(){
    pulseTime = pulseIn(2, HIGH);
    Serial.print(pulseTime);
    
}
