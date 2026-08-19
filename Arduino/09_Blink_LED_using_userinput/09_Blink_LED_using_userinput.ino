int blinktime ;
int j ;
String msg = "Enter the number of times u wnat the led to blink : ";
String msg2 = "Enjoy your little show :)";
int redpin = 13 ;
int del1 = 500 ;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.print(msg);
while(Serial.available() == 0){}
Serial.println(msg2);
blinktime = Serial.parseInt();
for(j=1;j<= blinktime ;j= j+1){

digitalWrite(redpin,HIGH);
delay(del1);
digitalWrite(redpin,LOW);
delay(del1);
}
}
