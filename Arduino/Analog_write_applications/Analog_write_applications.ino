int pin = 9;
int bright = 25; 
int bright1 = 100; 
int bright2 = 255; 
int del1=1000 ;
void setup() {
 pinMode(pin,OUTPUT);

}

void loop() {
analogWrite(pin,bright);
delay(del1);
analogWrite(pin,bright1);
delay(del1);
analogWrite(pin,bright2);
delay(del1);
}
