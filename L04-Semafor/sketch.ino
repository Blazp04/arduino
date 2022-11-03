int crvena = 4;
int zuta = 5;
int zelena = 6;
int prekidac = 3;

void setup() {

  Serial.begin(9600);
  pinMode(crvena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(zuta, OUTPUT);


}

void loop() {

  if (digitalRead(prekidac) == HIGH)
  {
     digitalWrite(crvena, LOW);
    digitalWrite(zelena, LOW);
    digitalWrite(zuta, HIGH);
    delay(1000);
    digitalWrite(zuta, LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(crvena, HIGH);
    delay(5000);
    digitalWrite(crvena, HIGH);
    digitalWrite(zuta, HIGH);
    delay(1000);

    digitalWrite(zuta, LOW);
    digitalWrite(zelena, HIGH);
    digitalWrite(crvena, LOW);
    delay(5000);
    digitalWrite(zelena, LOW);
    delay(1000);
    digitalWrite(zelena, HIGH);
    delay(1000);
    digitalWrite(zelena, LOW);
    delay(1000);
    digitalWrite(zelena, HIGH);
    delay(1000);
    digitalWrite(zelena, LOW);
    digitalWrite(zuta, HIGH);
    delay(2000);
    digitalWrite(zuta, LOW);

  }
}
