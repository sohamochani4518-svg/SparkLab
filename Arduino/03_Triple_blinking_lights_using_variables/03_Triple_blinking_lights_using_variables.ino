int pinred = 13; 
int pinblue = 10; 
int pinyellow = 8; 

int delred = 100; 
int delblue = 250; 
int delyellow = 500; 

void setup() { 
  pinMode(pinred, OUTPUT); 
  pinMode(pinblue, OUTPUT); 
  pinMode(pinyellow, OUTPUT); 
} 

void loop() { 
  // Red LED blink
  digitalWrite(pinred, HIGH); 
  delay(delred); 
  digitalWrite(pinred, LOW); 
  delay(delred); 

  // Blue LED blink
  digitalWrite(pinblue, HIGH); 
  delay(delblue); 
  digitalWrite(pinblue, LOW); 
  delay(delblue); 

  // Yellow LED blink
  digitalWrite(pinyellow, HIGH); 
  delay(delyellow); 
  digitalWrite(pinyellow, LOW); 
  delay(delyellow); 
}
