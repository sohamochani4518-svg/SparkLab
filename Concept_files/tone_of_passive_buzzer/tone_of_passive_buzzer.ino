int buzzpin = 6  ;
int del1 = 10;
int del2= 8 ;
int j;
void setup() {
 pinMode(buzzpin,HIGH);

}

void loop() {
 for(j=1;j<=100;j=j+1){

digitalWrite(buzzpin,HIGH);
delayMicroseconds(del2);
digitalWrite(buzzpin,LOW);
delayMicroseconds(del2);

 }

}
