int potPin = A1	;              // Potenciomeatr
int ledPin = 10;               // Led dioda
int potVal = 0;                // Vrijednost potenciometra(0-1023)

void setup() {
  Serial.begin(9600);         // Pokretanje serial monitora
  pinMode(ledPin, OUTPUT);    // Postavljanje led pina kao izlazni
}


void loop() {
  
  potVal = analogRead(potPin);       // Čita vriednost potenciometra i sprema je u varijablu
  Serial.println(potVal);            // Ispijuje podatke u serial monitoru
  
  digitalWrite(ledPin, HIGH);        // Pali plavu led lampicu
  delay(potVal);                     // Čeka određen period, prediod je određen vrijednosti potenciometra
  
  digitalWrite(ledPin, LOW);         // Gasi plavu led lampicu
  delay(potVal);                     // Čeka određen period, prediod je određen vrijednosti potenciometra
  
}
