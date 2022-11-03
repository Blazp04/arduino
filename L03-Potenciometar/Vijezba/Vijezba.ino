int potenciometar;

int led = 2;
int pot = A1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  potenciometar = analogRead(pot);
  if(potenciometar > 500)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    
    digitalWrite(led, HIGH);
    delay(potenciometar);
     digitalWrite(led, LOW);
    delay(potenciometar);
    
  }
  
}
