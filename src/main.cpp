#include <Arduino.h>

void setup() {
  // nothing to do here
  Serial.begin(9600);
}
 
void loop() {

  int potreading = analogRead(A0);
  int frequency = map(potreading, 0, 1023, 200, 1000); // map the pot reading to a frequency
  // play the tone for 1 second:
  if (potreading > 550) {
    tone(8, frequency,10);
    delay(10);
  }
  else {
    noTone(8);
  }

  Serial.println(potreading);
}
