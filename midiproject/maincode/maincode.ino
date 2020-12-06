#include <pitches.h>

#define KEY_C 2
#define KEY_CS A0
#define KEY_D 4
#define KEY_DS 5
#define KEY_E 6
#define KEY_F 7
#define KEY_FS 8
#define KEY_G 9
#define KEY_GS 10
#define KEY_A 11
#define KEY_AS 12
#define KEY_B 13

#define AUDIO_OUTPUT 3

const int notes[12] = {NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4};
const int keys[12] = {KEY_C, KEY_CS, KEY_D, KEY_DS, KEY_E, KEY_F, KEY_FS, KEY_G, KEY_GS, KEY_A, KEY_AS, KEY_B};

void setup() {
  Serial.begin(9600);

  // register each piano key
  pinMode(KEY_C, INPUT_PULLUP);
//  digitalWrite(KEY_C, HIGH);
  pinMode(KEY_CS, INPUT_PULLUP);
//  digitalWrite(KEY_CS, HIGH);
  pinMode(KEY_D, INPUT_PULLUP);
//  digitalWrite(KEY_D, HIGH);
  pinMode(KEY_DS, INPUT_PULLUP);
//  digitalWrite(KEY_DS, HIGH);
  pinMode(KEY_E, INPUT_PULLUP);
//  digitalWrite(KEY_E, HIGH);
  pinMode(KEY_F, INPUT_PULLUP);
//  digitalWrite(KEY_F, HIGH);
  pinMode(KEY_FS, INPUT_PULLUP);
//  digitalWrite(KEY_FS, HIGH);
  pinMode(KEY_G, INPUT_PULLUP);
//  digitalWrite(KEY_G, HIGH);
  pinMode(KEY_GS, INPUT_PULLUP);
//  digitalWrite(KEY_GS, HIGH);
  pinMode(KEY_A, INPUT_PULLUP);
//  digitalWrite(KEY_A, HIGH);
  pinMode(KEY_AS, INPUT_PULLUP);
//  digitalWrite(KEY_AS, HIGH);
  pinMode(KEY_B, INPUT_PULLUP);
//  digitalWrite(KEY_B, HIGH);

  // A0 output to speaker/buzzer
//  pinMode (AUDIO_OUTPUT, OUTPUT);

  // A1, A2, A3, A4 input from buttons for song to play

}

void loop() {

  // read keys
  int key_c = digitalRead(KEY_C);
  int key_cs = digitalRead(KEY_CS);
  int key_d = digitalRead(KEY_D);
  int key_ds = digitalRead(KEY_DS);
  int key_e = digitalRead(KEY_E);
  int key_f = digitalRead(KEY_F);
  int key_fs = digitalRead(KEY_FS);
  int key_g = digitalRead(KEY_G);
  int key_gs = digitalRead(KEY_GS);
  int key_a = digitalRead(KEY_A);
  int key_as = digitalRead(KEY_AS);
  int key_b = digitalRead(KEY_B);

  int _keys[12] = {key_c, key_cs, key_d, key_ds, key_e, key_f, key_g, key_gs, key_a, key_as, key_b};
  int len = sizeof(_keys);

  for (int i = 0; i < len; i++) {
    Serial.println(_keys[i]);

    // signal version 1
//        if (_keys[i] == LOW) {
//          tone(AUDIO_OUTPUT, notes[i]);
//        }
//        else {
//          noTone(AUDIO_OUTPUT);
//        }

    // signal version 2
    //    noTone(AUDIO_OUTPUT);
    //    if (_keys[i] == LOW) {
    //      tone(AUDIO_OUTPUT, notes[i]);
    //    }

  }

    // signal version 3
    
    if (key_c == LOW) { tone(AUDIO_OUTPUT, notes[0]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_cs == LOW) { tone(AUDIO_OUTPUT, notes[1]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_d == LOW) { tone(AUDIO_OUTPUT, notes[2]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_ds == LOW) { tone(AUDIO_OUTPUT, notes[3]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_e == LOW) { tone(AUDIO_OUTPUT, notes[4]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_f == LOW) { tone(AUDIO_OUTPUT, notes[5]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_fs == LOW) { tone(AUDIO_OUTPUT, notes[6]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_g == LOW) { tone(AUDIO_OUTPUT, notes[7]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_gs == LOW) { tone(AUDIO_OUTPUT, notes[8]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_a == LOW) { tone(AUDIO_OUTPUT, notes[9]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_as == LOW) { tone(AUDIO_OUTPUT, notes[10]); }
//    else { noTone(AUDIO_OUTPUT); }
    else if (key_b == LOW) { tone(AUDIO_OUTPUT, notes[11]); }
    else { noTone(AUDIO_OUTPUT); }
  

  
    delay(20);

}
