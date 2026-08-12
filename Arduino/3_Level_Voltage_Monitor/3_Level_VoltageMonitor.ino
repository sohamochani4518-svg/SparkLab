int bluepin = 9;
int yellowpin = 10;
int redpin = 11;
int myvoltpin = A3; 
int del1 = 750;
float V2;
float readval;
int buzzerpin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bluepin, OUTPUT);
  pinMode(redpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(myvoltpin, INPUT);
  pinMode(buzzerpin, OUTPUT);
}

void loop() {
  readval = analogRead(myvoltpin);
  V2 = (5./1023.)*readval;
  Serial.print("Potentiometer reading is : ");
  Serial.print(V2);
delay(del1);
  if(V2>= 0.0 && V2 <= 3.0){
    digitalWrite(bluepin,HIGH);
    digitalWrite(yellowpin,LOW);
    digitalWrite(redpin,LOW);
    Serial.println("Voltage is normal");
    digitalWrite(buzzerpin, LOW);
  }

  if(V2>= 3.1 && V2 <= 4.0){
    digitalWrite(bluepin,LOW);
    digitalWrite(yellowpin,HIGH);
    digitalWrite(redpin,LOW);
    Serial.println("Warning Volatage is at par !!");
    digitalWrite(buzzerpin, LOW);
  }

  if(V2>= 4.1 && V2 <= 5.0){
    digitalWrite(bluepin,LOW);
    digitalWrite(yellowpin,LOW);
    digitalWrite(redpin,HIGH);
    digitalWrite(buzzerpin, HIGH);
    Serial.println("Warning voltage tooo high !!!!!!!!");
    tone(buzzerpin, 5000);
    delay(500);

    noTone(buzzerpin);
    delay(750);
    delay(del1);
  }
}