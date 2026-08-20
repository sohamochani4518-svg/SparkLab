int j = 1 ;
int del2 = 250 ;
int del1 = 750 ;
String myString = " j = ";
String SZ = " z = ";
int x = 3;
int y = 7;
int z = x + y;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("x = ");
Serial.print(x);
delay(del1);
Serial.print("y = ");
Serial.print(y);
delay(del1) ; 
Serial.println("z = x + y");
delay(del2);
Serial.println("z = ");
Serial.println(z);
delay(del1);

}
