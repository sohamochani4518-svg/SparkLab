int buzzpin = 6 ;
int del1 = 1 ;
int del2 = 2 ;
int j ;



void setup() {
pinMode(buzzpin,OUTPUT);

}

void loop() {
for(j=1 ; j<=100;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(del1);
digitalWrite(buzzpin,LOW);
delay(del1);
}
for(j=1 ; j<=100;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(del2);
digitalWrite(buzzpin,LOW);
delay(del2);
}







}
