#include <Servo.h>
#include "DHT.h"

int ahPin = 3;
int dhtPin = 4;
int crvena = 6;
int zelena = 5; // zelena lampica

int s1 = 12;
int s2 = 11;
int s3 = 10;
int s4 = 9;
int s5 = 8;
int s6 = 7;

Servo ah;
DHT dht(dhtPin, DHT22);

float vlaznost = 0;
float temperatura = 0;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);
  pinMode(s5, OUTPUT);
  pinMode(s6, OUTPUT);

  ah.attach(ahPin);
  dht.begin();

  Serial.begin(9600);
}

void loop() {

  vlaznost = dht.readHumidity();
  temperatura = dht.readTemperature();
  if (temperatura > 20)
  {
    ah.write(90);
    digitalWrite(zelena, HIGH);
    digitalWrite(crvena, LOW);

  }
  else
  {
    ah.write(0);
    digitalWrite(zelena, LOW);
    digitalWrite(crvena, HIGH);

  }

  if (vlaznost < 10 & vlaznost > 0)
  {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    digitalWrite(s5, LOW);
    digitalWrite(s6, LOW);


  }
  else if (vlaznost < 20 & vlaznost > 10)
  {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    digitalWrite(s5, LOW);
    digitalWrite(s6, LOW);

  }
  else if (vlaznost < 30 & vlaznost > 20)
  {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, LOW);
    digitalWrite(s5, LOW);
    digitalWrite(s6, LOW);
  }
  else if (vlaznost < 40 & vlaznost > 30)
  {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, HIGH);
    digitalWrite(s5, LOW);
    digitalWrite(s6, LOW);
  }
  else if (vlaznost < 50 & vlaznost > 40)
  {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, HIGH);
    digitalWrite(s5, HIGH);
    digitalWrite(s6, LOW);
  }

  else
  {
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    digitalWrite(s5, LOW);
    digitalWrite(s6, HIGH);

    digitalWrite(s6, HIGH);
    delay(vlaznost * 10);
    digitalWrite(s6, LOW);
    delay(vlaznost * 10);
  }

}
