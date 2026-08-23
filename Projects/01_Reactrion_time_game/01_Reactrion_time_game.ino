int blinktime;

String msg1 = "Enter the number of times you want to blink the red led before turning the green led on";
String msg2 = "Lets see who wins :)";
String msg3 = "player 1 wins :)";
String msg4 = "player 2 wins :)";

int del1 = 500;
int del2 = random(1000, 2000);
int del3 = 300;
int j;

int p1 = 11 ;
int p2 = 2;
int buzzpin = 12 ;
int buzztime = 500 ;
int redpin = 3 ;
int bluepin = 9;
int greenpin = 5;
int yellowpin = 6;

unsigned long startTime;
unsigned long t1;
unsigned long t2;

bool p1Pressed = false;
bool p2Pressed = false;

int winner;


void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(yellowpin, OUTPUT);

  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);

  Serial.begin(9600);
}


void loop() {

  // Reset everything for the new round
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, LOW);
  digitalWrite(bluepin, LOW);
  digitalWrite(yellowpin, LOW);
  digitalWrite(buzzpin, LOW);

  p1Pressed = false;
  p2Pressed = false;
  winner = 0;

  // Ask user for number of red LED blinks
  Serial.println(msg1);

  while (Serial.available() == 0) {}

  blinktime = Serial.parseInt();

  Serial.println(msg2);

  // Blink red LED
  for (j = 1; j <= blinktime; j = j + 1) {
    digitalWrite(redpin, HIGH);
    delay(del1);

    digitalWrite(redpin, LOW);
    delay(del1);
  }

  // Generate a new random delay for every round
  del2 = random(1000, 2000);

  delay(del2);

  // Green LED ON
  digitalWrite(greenpin, HIGH);

  // Start reaction timer
  startTime = millis();

  // Keep checking both players until one presses
  while (p1Pressed == false && p2Pressed == false) {

    if (digitalRead(p1) == LOW) {
      p1Pressed = true;
      winner = 1;
      t1 = millis() - startTime;
    }

    if (digitalRead(p2) == LOW && p1Pressed == false) {
      p2Pressed = true;
      winner = 2;
      t2 = millis() - startTime;
    }
  }


  // Player 1 wins
  if (winner == 1) {

    Serial.println(msg3);
    Serial.print("your reaction time was :");
    Serial.print(t1);
    Serial.println("ms");

    for (j = 1; j <= 10; j = j + 1) {
      digitalWrite(yellowpin, HIGH);
      delay(del3);

      digitalWrite(yellowpin, LOW);
      delay(del3);
      
      digitalWrite(buzzpin, HIGH);
delay(buzztime);
digitalWrite(buzzpin, LOW);
    }
  }


  // Player 2 wins
  else if (winner == 2) {

    Serial.println(msg4);
     Serial.print("your reaction time was : ");
    Serial.print(t2);
     Serial.println("ms");


    for (j = 1; j <= 10; j = j + 1) {
      digitalWrite(bluepin, HIGH);
      delay(del3);
         
      digitalWrite(bluepin, LOW);
      delay(del3);

      digitalWrite(buzzpin, LOW);
      digitalWrite(buzzpin, HIGH);
delay(buzztime);
digitalWrite(buzzpin, LOW);
    }
  }

  // Green LED turns OFF only after winner indication
  digitalWrite(greenpin, LOW);

  delay(del3);
}