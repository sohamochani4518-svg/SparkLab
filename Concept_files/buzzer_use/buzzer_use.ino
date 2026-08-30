int mynumb ;
int buzzpin = 6 ;
String msg1 = "enter the number you want to print ";
int del1 = 2000  ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzpin,HIGH);



}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available() == 0){}
mynumb = Serial.parseInt();
if(mynumb > 10 ){
digitalWrite(buzzpin,HIGH);
delay(del1);
digitalWrite(buzzpin,LOW);
delay(del1);
}





}
