int pin = 13 ;
int dit = 300 ;
int dah = 700 ;
int longW = 1000;
void setup() {
pinMode(pin,OUTPUT);
}

void loop() {
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(longW);
  digitalWrite(pin,LOW);
  delay(dit);


  digitalWrite(pin,HIGH);
  delay(longW);
  digitalWrite(pin,LOW);
  delay(dit);


  digitalWrite(pin,HIGH);
  delay(longW);
  digitalWrite(pin,LOW);
  delay(dit);

 digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

  digitalWrite(pin,HIGH);
  delay(longW);
  digitalWrite(pin,LOW);
  delay(dit);


}