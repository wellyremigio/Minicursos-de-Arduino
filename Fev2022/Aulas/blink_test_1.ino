
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(8, LOW);
}