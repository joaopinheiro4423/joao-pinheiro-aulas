const int botao1 = 13;
const int botao2 = 12;
const int botao3 = 11;
const int botao4 = 10;
const int botao5 = 9;

void setup()
{
  pinMode(botao1, OUTPUT);
  pinMode(botao2, OUTPUT);
  pinMode(botao3, OUTPUT);
  pinMode(botao4, OUTPUT);
  pinMode(botao5, OUTPUT);
  Serial.begin(9600);

}

int valor1;
int valor2;
int valor3;
int valor4;
int valor5;
int analogValue = 0;   

void loop(){
  
  analogValue = analogRead(0);
  valor1 = digitalRead(botao1);
  valor2 = digitalRead(botao2);
  valor3 = digitalRead(botao3);
  valor4 = digitalRead(botao4);
  valor5 = digitalRead(botao5);
  
 
  if(valor1){
    Serial.println("o dia esta azul");
 
  }
  if(valor2){
   Serial.println("o dia esta nublado"); 
 
  } 
  if(valor3){
    Serial.println("o dia esta ensolarado");  
  
  }
  if(valor4){
    Serial.println("o dia esta chuvoso");
  
  }
    if(valor5){
    Serial.println("o dia esta claro");
   
   }
 }
