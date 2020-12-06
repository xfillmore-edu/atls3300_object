void setup() {
  // put your setup code here, to run once:

  pinMode(13, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  const int button = digitalRead(13);

  Serial.println(button);
  delay(500);

  if(!button) {tone(11, 240);}
  else {noTone(11);}
  
}
