void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  int botao = digitalRead(7);
  digitalWrite(8, botao);
  delay(10);
}
