int dcount = 50;

void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
//  pinMode(12, OUTPUT);
//  pinMode(11, OUTPUT);
//  pinMode(10, OUTPUT);
//  pinMode( 9, OUTPUT);
//  pinMode( 8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13, HIGH);
  delay(dcount);
  digitalWrite(13, LOW);
  delay(dcount);
  dcount += 50;

  if (dcount >= 2000)
  {
    dcount = 50;
  }

}
