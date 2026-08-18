int bluepin = 6;
int potpin = A1;

void setup() {
  Serial.begin(9600);
  pinMode(bluepin, OUTPUT);
}

void loop() {
  int potval = analogRead(potpin);

  int ledval = map(potval, 0, 1023, 0, 255);

  analogWrite(bluepin, ledval);

  Serial.print("Pot: ");
  Serial.print(potval);
  Serial.print("  LED: ");
  Serial.println(ledval);

  delay(20);
}