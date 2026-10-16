#include <Arduino.h> 
int potpin = A0;
int buzzerpin = 8;
int pulsepin = 7;

unsigned long duration = 0;


void setup() {
  // nothing to do here
  Serial.begin(9600);
  pinMode(pulsepin, INPUT);
}
 
void loop() {

  int potreading = analogRead(potpin);
  int frequency = map(potreading, 0, 1023, 200, 1000); // map the pot reading to a frequency
  // play the tone for 1 second:
  if (potreading > 550) {
    tone(buzzerpin, frequency,10);
    delay(10);
  }
  else {
   
  }
   duration = pulseIn(pulsepin, HIGH, 1000000);

   Serial.print("Pulse duration: ");
   Serial.println(duration);

   Serial.print("Pot reading: ");
   Serial.println(potreading);
}
