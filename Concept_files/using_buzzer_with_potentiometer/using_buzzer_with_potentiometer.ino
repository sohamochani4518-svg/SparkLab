int potpin = A3 ;
 int buzzpin = 6 ;
int readval;
int del1 = 1000 ;
void setup() {
  Serial.begin(9600);
pinMode(buzzpin,OUTPUT);

}

void loop() {

readval = analogRead(potpin);
Serial.println(readval);
while(readval > 1000){

digitalWrite(buzzpin,HIGH);
readval = analogRead(A3);
Serial.println(readval);

}
digitalWrite(buzzpin,LOW);
}






