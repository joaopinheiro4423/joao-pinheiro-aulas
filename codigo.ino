 const int botao1 = 7;
  const int led1 = 8; 

  void setup()
 {
    
  pinMode(botao1, INPUT);
  pinMode(led1, OUTPUT);
    
 }
  
 int valor1;
 
 void loop()
 {
 valor1 = digitalRead(botao1);
 digitalWrite (led1, HIGH);
  
if(valor1){
 
 digitalWrite(led1, LOW);
 delay(100);
 }
}    
   
