int redpin = 6;
int greenpin = 5;
int bluepin = 3;
String colour ;
String mycolour ;
int del1 = 500 ;
String msg = "what colour of the led do u want to blink ?";
void setup() {
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(bluepin,OUTPUT);
pinMode(greenpin,OUTPUT);

}

void loop() {
 
 Serial.println(msg);
 while(Serial.available() == 0){}
colour = Serial.readString();
colour.trim();
digitalWrite(redpin, LOW);
digitalWrite(greenpin, LOW);
digitalWrite(bluepin, LOW);
if(colour == "RED" or colour == "red" or colour == "Red"){
digitalWrite(redpin,HIGH);
}
if(colour == "GREEN" or colour == "green" or colour == "Green"){
digitalWrite(greenpin,HIGH);
}
if(colour == "BLUE" or colour == "blue" or colour == "Blue"){
digitalWrite(bluepin,HIGH);}
if(colour == "OFF" or colour == "off" or colour == "Off"){
digitalWrite(redpin,LOW);
digitalWrite(bluepin,LOW);
digitalWrite(greenpin,LOW);}

if(colour == "AQUA" or colour == "aqua" or colour == "Aqua"){
digitalWrite(redpin,LOW);
analogWrite(bluepin,85);
analogWrite(greenpin,255);}

if(colour == "ORANGE" or colour == "orange" or colour == "Orange"){
analogWrite(redpin, 255);
analogWrite(greenpin, 65);
analogWrite(bluepin, 0);}

if(colour == "YELLOW" or colour == "yellow" or colour == "Yellow"){
analogWrite(redpin, 255);
analogWrite(greenpin, 255);
analogWrite(bluepin, 0);}


if(colour == "FUSIYA" or colour == "fusiya" or colour == "Fusiya"){
analogWrite(redpin, 255);
analogWrite(greenpin, 0);
analogWrite(bluepin, 255);}

if(colour == "MAGENTA" or colour == "magenta" or colour == "Magenta"){
analogWrite(redpin, 255);
analogWrite(greenpin, 0);
analogWrite(bluepin, 255);}

if(colour == "CYAN" or colour == "cyan" or colour == "Cyan"){
analogWrite(redpin, 0);
analogWrite(greenpin, 255);
analogWrite(bluepin, 255);}

delay(del1);
}
