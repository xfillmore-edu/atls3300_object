#include <pitches.h>

//const int currentButton = 8;
//const int buttons = [2, 3, 4, 5, 6, 7, 8];
const int led = 13;
//int currentButtonState = 0;
//int buttonStates = [0, 0, 0, 0, 0, 0, 0];

void setup() {

//  pinMode(buttons, INPUT_PULLUP);
//  pinMode(currentButton, INPUT_PULLUP);

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);

  pinMode(led, OUTPUT);


  Serial.begin(9600);


}

void loop() {
//  currentButtonState = digitalRead(currentButton);
//  Serial.println(currentButtonState);
  
//    for (int i=0; i<sizeof(buttons); i++) {
//      buttonStates[i] = digitalRead(buttons[i]);
//    }
//  
//    for (int i=0; i<sizeof(buttons); i++) {
//      if (buttonStates[i] == HIGH) {
//        digitalWrite(led, HIGH);
//      }
//      else {
//        digitalWrite(led, LOW);
//      }
//    }

//  if (currentButtonState == HIGH) {
//    digitalWrite(led, LOW);
//  }
//  else {
//    digitalWrite(led, HIGH);
//  }

  int key1 = digitalRead(2);
  int key2 = digitalRead(3);
  int key3 = digitalRead(4);
  int key4 = digitalRead(5);
  int key5 = digitalRead(6);
  int key6 = digitalRead(7);
  int key7 = digitalRead(8);

  if (key1 == LOW) { tone(led, NOTE_C4); }
  else { noTone(led); }
  
  if (key2 == LOW) { tone(led, NOTE_D4); }
  else { noTone(led); }
  
  if (key3 == LOW) { tone(led, NOTE_E4); }
  else { noTone(led); }
  
  if (key4 == LOW) { tone(led, NOTE_F4); }
  else { noTone(led); }
  
  if (key5 == LOW) { tone(led, NOTE_G4); }
  else { noTone(led); }
  
  if (key6 == LOW) { tone(led, NOTE_A4); }
  else { noTone(led); }
  
  if (key7 == LOW) { tone(led, NOTE_B4); }
  else { noTone(led); }






}
