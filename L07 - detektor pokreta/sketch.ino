int senzorPokrata = 8; // definira da je na pin broj 8 povezan senzor pokreta
int relayPin = 7;

// stvaramo novu varijablu tipa podataka "bool"
// u koju ćemo kasnije spremiti podatke o detekciji pokreta
bool pokretDetektiran;

void setup()
{
  Serial.begin(9600);
  pinMode(senzorPokrata, INPUT);
  pinMode(relayPin, INPUT);
}

void loop()
{
  // Sada provjeravamo kakvo je stanje senzora.
  // Kada je pokret detektiran, stanje će biti HIGH
  // u tome slučaju želimo našoj varijabli dati vrijednost "true"
  // u koloko senzor nije aktiviran stanje će biti "false"
  pokretDetektiran = digitalRead(senzorPokrata);

  if (pokretDetektiran == true)
  {
    Serial.println("pokret detektiran");
    digitalWrite(relayPin, HIGH);
  }
  else
  {
    Serial.println("Senzor deaktiviran");
    digitalWrite(relayPin, LOW);
  }
}
