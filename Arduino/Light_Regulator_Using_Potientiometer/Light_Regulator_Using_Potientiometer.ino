int readval;
float V2;
int redpin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(redpin, OUTPUT);
}

void loop() {
  digitalWrite(redpin, HIGH);
  readval = analogRead(A3);  
  V2 = (5./ 1023.) * readval;
  Serial.println(V2);
  delay(750);
}