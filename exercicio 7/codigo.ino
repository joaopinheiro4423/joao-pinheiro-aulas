const int botao1 = 13;
const int botao2 = 12;
const int botao3 = 11;
const int botao4 = 10;
const int botao5 = 9;
const int botao6 = 8;
const int botao7 = 7;


void setup()
{
  pinMode(botao1, OUTPUT);
  pinMode(botao2, OUTPUT);
  pinMode(botao3, OUTPUT);
  pinMode(botao4, OUTPUT);
  pinMode(botao5, OUTPUT);
  pinMode(botao6, OUTPUT);
  pinMode(botao7, OUTPUT);
  Serial.begin(9600);

}

int valor1;
int valor2;
int valor3;
int valor4;
int valor5;
int valor6;
int valor7;
int analogValue = 0;   

void loop(){
  
  analogValue = analogRead(0);
  valor1 = digitalRead(botao1);
  valor2 = digitalRead(botao2);
  valor3 = digitalRead(botao3);
  valor4 = digitalRead(botao4);
  valor5 = digitalRead(botao5);
  valor6 = digitalRead(botao6);
  valor7 = digitalRead(botao7);
  
  if(valor1){
  Serial.println("do");
 
  }
  if(valor2){
  Serial.println("re");
 
  } 
  if(valor3){
  Serial.println("mi");  
  
  }
  if(valor4){
  Serial.println("fa");
  
  }
  
  if(valor5) {
  Serial.println("sol");
    
  }
  
  if(valor6){
  Serial.println("la");
    
  } 
      
  if(valor7){
  Serial.println("si"); 
    
   }
 }
