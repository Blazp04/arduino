int trigPin = 10;
int echoPin = 9;

long vrijeme;
float udaljenost;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);

   vrijeme = pulseIn(echoPin, HIGH);
   udaljenost = vrijeme*0.340/2;

    Serial.print("Udaljenost je: ");
    Serial.println(udaljenost);
}
