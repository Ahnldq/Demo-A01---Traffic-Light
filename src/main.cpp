#include <Arduino.h>

const int buzzer = 5;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  //1. Green Light
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(buzzer, LOW);

  delay(20000);

  //2. Yellow Light
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(buzzer, LOW);

  delay(3000);

  //3. Red Light + Bip Bip Sound to announce to be ready to go
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(15000);

  //Beeping sound using "for"
  for (int i = 0; i < 5; i++){
    digitalWrite(buzzer, HIGH);
    delay(300);
    digitalWrite(buzzer, LOW);
    delay(300);
  }

}
