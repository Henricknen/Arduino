#include <Servo.h>		// fazendo include da biblioteca 'servo'

#define pot A0

Servo s1;		// declarando um elemento o tipo 'Servo'

int angS1;			
int a;		// variável 'a' que receberá o valor do servo

void setup(){
  s1.attach(2);		// 'attach' indica qual porta de controle o servo está ligado
  angS1 = 0;	
  s1.write(angS1);		// escrevendo o ângulo no servo
  Serial.begin(9600);
}

void loop(){   
  angS1 = 0;
  s1.write(angS1);
  a = s1.read();		// incrementando a leitura do servo
  Serial.println(a);
  delay(3000);		 
  angS1 = 90;		// nova posição de 90
  s1.write(angS1);
  a = s1.read();		// incrementando a leitura do servo
  Serial.println(a);
  delay(3000);		 
  angS1 = 180;		
  s1.write(angS1);
  a = s1.read();
  Serial.println(a);		// escreve o valor da Serial 'a'
  delay(3000);
}