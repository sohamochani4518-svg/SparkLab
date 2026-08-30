int photoval ;
int j;
int buzzpin = 6;
int photopin = A0;
int deltime ;
void setup() {
Serial.begin(9600);
pinMode(buzzpin,OUTPUT);

}

void loop() {
photoval = analogRead(photopin);
Serial.println(photoval);
deltime = ((-497.)/15.) + 1094 ;
digitalWrite(buzzpin,HIGH);
delayMicroseconds(deltime);
digitalWrite(buzzpin,LOW);
delayMicroseconds(deltime);

}
