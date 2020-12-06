#include <pitches.h>

// NOTE_C4 is middle C
// C starts the numeric range
// B3 __ C4 D4 E4 F4 G4 A4 B4 __ C5
// NOTE_xSn denotes Sharp

// song = the notes for the song
// holds = how long each note should be held in the song
// delays = length of pauses between notes for the song

// multiple buttons to single analog input
// https://youtu.be/Y23vMfynUJ0

// The Itsy Bitsy Spider
//int song_spider[] = {
//  NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
//  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_E4,
//  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
//  NOTE_G3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4
//};
//int holds_spider[] = {
//  //
//};
//int delays_spider[] = {
//  //
//};

//// Do-Re-Mi
//int song_doremi[] = {
//  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_C4, NOTE_E4,
//  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_F4,
//  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_G4,
//  NOTE_F4, NOTE_F4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_F4, NOTE_A4,
//  NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4,
//  NOTE_A4, NOTE_A4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_A4,
//  NOTE_B4, NOTE_B4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_A4, NOTE_B4, NOTE_C4
//  NOTE_C4, NOTE_B4, NOTE_A4, NOTE_F4, NOTE_B4, NOTE_G4, NOTE_C4, NOTE_G4, NOTE_E4, NOTE_D4,
//  NOTE_C4
//};
//int holds_doremi[] = {
//  //
//};
//int delays_doremi[] = {
//  //
//};

// Eagles - Hotel California (first verse + chorus)
//int song_hotelCA[] = {
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5,
//  NOTE_D5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_A4,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_E5,
//  NOTE_C5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5,
//  NOTE_D4, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_E5,
//  NOTE_E4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5,
//  NOTE_E4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5,
//  NOTE_D4, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_A4,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_E5,
//  NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5,
//  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_E5,
//  NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_E5, NOTE_D4,
//  // chorus
//  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5,
//  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_C5,
//  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_E5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5,
//  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5,
//  NOTE_E5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5
//};
//int holds_hotelCA[] = {
//  //
//};
//int delays_hotelCA[] = {
//  //
//};


// Survivor - Eye of the Tiger (first verse + chorus)
//int song_tiger[] = {
//  NOTE_G4, NOTE_AS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_DS4,
//  NOTE_F4, NOTE_F4, NOTE_ F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_DS4,
//  NOTE_G4, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_DS4,
//  NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_F4, NOTE_DS4, NOTE_F4, NOTE_F4, NOTE_DS4, NOTE_G4,
//  NOTE_G4, NOTE_G4, ANOTE_S4, NOTE_G4, NOTE_DS4, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_DS4,
//  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_DS4,
//  NOTE_G4, NOTE_G4, NOTE_AS4, NOTE_C5, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_DS4,
//  NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_F5, NOTE_DS4, NOTE_F4, NOTE_F4, NOTE_DS4, NOTE_G4,
//  // chorus
//  NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_F4,
//  NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4,
//  NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_F4,
//  NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_G4, NOTE_GS4, NOTE_AS4, NOTE_GS4, NOTE_AS4, NOTE_C5, NOTE_F4, NOTE_DS4, NOTE_F4, NOTE_DS4
//};
//int holds_tiger[] = {
//  //
//};
//int delays_tiger[] = {
//  //
//};


const int selector = A0;

void setup() {

  Serial.begin(9600);

  // register keys
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  int selected = analogRead(selector);
  int song;
    Serial.println(selected);
  if (selected < 300) {
    song = 0;
  }
  else if (selected < 550) {
    song = 1;
  }
  else if (selected < 800) {
    song = 2;
  }
  else {
    song = 3;
  }

  playSong(selected);
  delay(2000);

}

void playSong(int selected) {
  switch (selected) {
    case 0:
      Serial.println("Now playing: The Itsy Bitsy Spider");
      //      int songLength = sizeof(song_spider) / sizeof(song_spider[0]);
      //      for (int i = 0; i < songLength; i++) {
      //        tone(song_spider[i]);
      //        delay(holds_spider[i]);
      //
      //        noTone();
      //        delay(delays_spider[i]);
      //      }
      break;
    case 1:
      Serial.println("Now playing: Do Re Mi");
      //      int songLength = sizeof(song_doremi) / sizeof(song_doremi[0]);
      //      for (int i = 0; i < songLength; i++) {
      //        tone(song_doremi[i]);
      //        delay(holds_doremi[i]);
      //
      //        noTone();
      //        delay(delays_doremi[i]);
      //      }
      break;
    case 2:
      Serial.println("Now playing: Hotel California");
      //      int songLength = sizeof(song_hotelCA) / sizeof(song_hotelCA[0]);
      //      for (int i = 0; i < songLength; i++) {
      //        tone(song_hotelCA[i]);
      //        delay(holds_hotelCA[i]);
      //
      //        noTone();
      //        delay(delays_hotelCA[i]);
      //      }
      break;
    case 3:
      Serial.println("Now playing: Eye of the Tiger");
      //      int songLength = sizeof(song_tiger) / sizeof(song_tiger[0]);
      //      for (int i = 0; i < songLength; i++) {
      //        tone(song_tiger[i]);
      //        delay(holds_tiger[i]);
      //
      //        noTone();
      //        delay(delays_tiger[i]);
      //      }
      break;
    default:
      break;

  }
}
