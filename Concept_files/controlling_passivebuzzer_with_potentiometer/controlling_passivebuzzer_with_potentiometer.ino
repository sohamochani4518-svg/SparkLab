int potpin = A3;
int buzzpin = 6 ;
float potval;
int buzzdel;
int j;
void setup() {
pinMode(buzzpin,OUTPUT);
pinMode(potpin,INPUT);
Serial.begin(9600);
}

void loop() {
potval = analogRead(potpin);
buzzdel = ((9940./1023.)*potval) + 60. ;
Serial.println(potval);
digitalWrite(buzzpin,HIGH);
delayMicroseconds(buzzdel);
digitalWrite(buzzpin,LOW);
delayMicroseconds(buzzdel);





}
