void setup() {

  Serial.begin(9600);

}

void loop() {
int a0 = analogRead(A0);
float voltage = 5.0 / 1023.0 * float(a0);
Serial.println(voltage);
delay(250);

}
