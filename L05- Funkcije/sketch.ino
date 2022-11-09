int crvena = 4;
int zuta = 5;
int zelena = 6;
int prekidac = 3;
int zujalica = 2;

void setup() {

  Serial.begin(9600);
  pinMode(crvena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(zuta, OUTPUT);
  pinMode(zujalica, OUTPUT);


}
void upali(int boja)
{
  if(boja==crvena)
  {
    zujanje(true);
  }
  digitalWrite(boja, HIGH);
}
void ugasi(int boja)
{
  if(boja==crvena)
  {
    zujanje(false);
  }
  digitalWrite(boja, LOW);
}

void zujanje(bool jeUpaljenaCrvena)
{
  if (jeUpaljenaCrvena == true)
  {
    upali(zujalica);
    

  }
  if(jeUpaljenaCrvena == false)
  {
    ugasi(zujalica);
  }


}

void semafor()

{
  upali(crvena);
  delay(5000);
  digitalWrite(crvena, HIGH);
  digitalWrite(zuta, HIGH);
  delay(1000);

  ugasi(zuta);
  digitalWrite(zelena, HIGH);
  ugasi(crvena);
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


void zmiganje()
{
  digitalWrite(crvena, LOW);
  digitalWrite(zelena, LOW);
  digitalWrite(zuta, HIGH);
  delay(1000);
  digitalWrite(zuta, LOW);
  delay(1000);
}





void loop() {

  if (digitalRead(prekidac) == HIGH)
  {
    zmiganje();
  }
  else
  {
    semafor();

  }
}