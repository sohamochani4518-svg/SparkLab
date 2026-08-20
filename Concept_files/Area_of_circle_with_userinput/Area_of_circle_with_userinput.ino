float radius ; 
String msg = "Enter a radius for your circle ";
String msg2 = "Your circle has an area of :";
float pi = 3.14 ;
float Area ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(msg);
while(Serial.available()==0){}
radius = Serial.parseInt();
Area = (radius*radius*pi);
Serial.print(msg2);
Serial.println(Area);
}
