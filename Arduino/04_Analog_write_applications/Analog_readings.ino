int readpin = A3;
float v2 = 0 ;
int del1 = 750;
int readval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (readpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval= analogRead(readpin);
  v2 = (5./1023.)*readval ;
Serial.println(v2);
delay(del1);
}
