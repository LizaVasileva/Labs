
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  for(int i=7; i<=13; i++)
  {
  digitalWrite(i, HIGH);
  delay(200);
  digitalWrite(i, LOW);
  }
}
