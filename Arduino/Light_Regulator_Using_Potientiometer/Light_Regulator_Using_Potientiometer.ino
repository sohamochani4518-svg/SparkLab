int readval ;
float V2 ;
int redpin = 9 ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redpin,HIGH);
readval = analogRead(redpin);
V2= (5./1023.)*readval ;
Serial.println(V2) ;
delay(750);
}
