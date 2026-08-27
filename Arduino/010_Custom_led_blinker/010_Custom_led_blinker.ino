int redpin = 11 ;
int yellowpin = 6 ;
int bluepin = 7;
int blinktime ;
int j ;
String led;
String msg1 = "enter the LED light you want to blink : ";
String msg2 = "enter the number of times you want your choosen led to blink :";
int del1 = 500 ;
String msg3 = "please enter a valid led colour : ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(yellowpin,OUTPUT);
pinMode(bluepin,OUTPUT);
}

void loop(){
Serial.print(msg1);
while(Serial.available() == 0){}
led = Serial.readString();
Serial.println(msg2);
while(Serial.available() == 0){}
blinktime = Serial.parseInt();
if(led == "red" or led == "RED" or led == "Red"){
for(j=1 ; j<= blinktime;j=j+1){
digitalWrite(redpin,HIGH);
delay(del1);
digitalWrite(redpin,LOW);
delay(del1);
}
}
else if(led == "blue" or led == "BLUE" or led == "Blue"){
for(j=1 ; j<= blinktime;j=j+1){
digitalWrite(bluepin,HIGH);
delay(del1);
digitalWrite(bluepin,LOW);
delay(del1);
}
}
else if(led == "yellow" or led == "YELLOW" or led == "Yellow"){
for(j=1 ; j<= blinktime;j=j+1){
digitalWrite(yellowpin,HIGH);
delay(del1);
digitalWrite(yellowpin,LOW);
delay(del1);
}
}
else {
  Serial.println(msg3);
}

}
