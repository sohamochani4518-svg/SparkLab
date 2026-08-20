int mynumber ;
String msg = "Enter your number";
String msg2 = "Your number is :";
int del1 = 500 ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available() == 0){}
mynumber = Serial.parseInt();
Serial.print(msg2);
Serial.println(mynumber);

}
