int humedad;
int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  humedad = analogRead(A0);
  Serial.println(humedad);
  
  if (humedad > 500) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }

  delay(500);
}
