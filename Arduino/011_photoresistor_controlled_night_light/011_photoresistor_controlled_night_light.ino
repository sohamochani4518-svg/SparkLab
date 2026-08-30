int photopin = A0;
int lightval;
 int del1 = 250 ;
 int bluepin = 6 ;
void setup() {
pinMode(photopin,INPUT);
Serial.begin(9600);
pinMode(bluepin,OUTPUT);
 }
void loop() {
lightval = analogRead(photopin);
Serial.println(lightval);
delay(del1);

if(lightval<= 50 ){

digitalWrite(bluepin,HIGH);
lightval = analogRead(photopin);

}
else {
digitalWrite(bluepin,LOW);
lightval = analogRead(photopin);
}







}