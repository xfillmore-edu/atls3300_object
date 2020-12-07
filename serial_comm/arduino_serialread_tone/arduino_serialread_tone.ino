// Wiring/Arduino code:
// Read data from the serial and turn ON or OFF a light depending on the value

unsigned short val; // Data received from the serial port
int ledPin = 9; // Set the pin to digital I/O 4

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  while (Serial.available()) { // If data is available to read,
    val = (Serial.read()).parseInt(); // read it and store it in val
  }
  if (val == 0) { // If H was received
    noTone(9);
  } else {
    tone(9, val);
  }
  delay(100); // Wait 100 milliseconds for next reading
}
