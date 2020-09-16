void setup() {
  // put your setup code here, to run once:
  
  pinMode(12, OUTPUT); // set pin 12 to output
  pinMode(13, OUTPUT); // set pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(12, LOW);
  digitalWrite(13,HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);

}
