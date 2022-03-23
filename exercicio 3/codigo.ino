void setup()
{
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
}

void loop()
{
  delay(2000); 
  digitalWrite(13, HIGH);
  delay(2000); 
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  
}
