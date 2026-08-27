String msg1 = "what is your name ? ";
String msg2 = "Hello ";
String msg3 = " , Welcome to arduino :) ";
String myname ;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  Serial.print(msg1 );
  while(Serial.available() == 0){}
  myname = Serial.readString();
Serial.print(msg2);
Serial.print(myname);
Serial.println(msg3);





}
