int readval;
float V2;
int redpin = 9;
int del1 = 750 ;
void setup() {
  Serial.begin(9600);
  pinMode(redpin, OUTPUT);
  pinMode(A3,INPUT);
}

void loop() {
  digitalWrite(redpin, HIGH);
  readval = analogRead(A3);  
  V2 = (5./ 1023.) * readval;
  Serial.print("The Potentiometer reading is : ");
  Serial.println(V2);
  delay(del1);
}