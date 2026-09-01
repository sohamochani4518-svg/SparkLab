int redpin = 6;
int buttonpin = 9 ;
int del1 =  50 ;
int butval ;




void setup() {

Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(buttonpin,INPUT);
}

void loop() {

butval = digitalRead(buttonpin);
Serial.println(butval);
delay(del1);
if(butval == 1){
digitalWrite(redpin,LOW);
butval = digitalRead(buttonpin);}


if(butval == 0){
digitalWrite(redpin,HIGH);
butval = digitalRead(buttonpin);}
}
