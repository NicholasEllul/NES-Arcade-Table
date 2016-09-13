//Made by Nick and CJ
//Made May 2016
// This allows buttons and joysticks to be seen as keypresses
#include <Keyboard.h>

//white orange == ground wire. Make sure its connected

//int leftPort = 8; //RED
//int rightPort = 9; //ORANGE
//int upPort = 10; //YELLOW
//int downPort = 11; //GREEN

////////////////

// THIS UPDATE ADDS SMALL DELAY // 

///////////////
int upPort = 11; //yellow
int downPort = 10; //green
int rightPort = 8; //orange
int leftPort = 9; //red

int aPort = 2;//orange
int bPort = 3;//

int startPort = 4;
int selectPort = 5;

void setup() {
  //buttons
  pinMode(aPort, INPUT);
  pinMode(bPort, INPUT);
  pinMode(startPort, INPUT);
  pinMode(selectPort, INPUT);

  //joystick
  pinMode(leftPort, INPUT);
  pinMode(rightPort, INPUT);
  pinMode(upPort, INPUT);
  pinMode(downPort, INPUT);

  //constantly outputing

  digitalWrite(leftPort, HIGH);
  digitalWrite(rightPort, HIGH);
  digitalWrite(upPort, HIGH);
  digitalWrite(downPort, HIGH);
  digitalWrite(aPort, HIGH);
  digitalWrite(bPort, HIGH);
  digitalWrite(startPort, HIGH);
  digitalWrite(selectPort, HIGH);



}

void loop() {
  // put your main code here, to run repeatedly:

 delay(10 11
 1);

  //////////////////////////
  //     JOYSTICK         //
  //////////////////////////

  if (digitalRead(leftPort) == LOW) {
    Keyboard.press('l');
  }
  else {
    Keyboard.release('l');
  }

  if (digitalRead(rightPort) == LOW) {
    Keyboard.press('r');
  }
  else {
    Keyboard.release('r');
  }

  if (digitalRead(upPort) == LOW) {
    Keyboard.press('u');
  }
  else {
    Keyboard.release('u');
  }

  if (digitalRead(downPort) == LOW) {
    Keyboard.press('d');
  }
  else {
    Keyboard.release('d');
  }


  //////////////////
  //buttons A + B//
  /////////////////

  if (digitalRead(aPort) == LOW) {
    Keyboard.press('a');
  }
  else {
    Keyboard.release('a');
  }

  if (digitalRead(bPort) == LOW) {
    Keyboard.press('b');
  }
  else {
    Keyboard.release('b');
  }


  //////////////////////////
  //buttons START + SELECT//
  //////////////////////////


  if (digitalRead(startPort) == LOW) {
    Keyboard.press('o');
  }
  else {
    Keyboard.release('o');
  }

  if (digitalRead(selectPort) == LOW) {
    Keyboard.press('p');
  }
  else {
    Keyboard.release('p');
  }

}
//
