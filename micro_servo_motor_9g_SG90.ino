#include <Servo.h>		// fazendo include da biblioteca 'servo'

#define pot A0

Servo s1;		// declarando um elemento o tipo 'Servo'

int angS1;			// variável 'angS1'

void setup(){
  s1.attach(2);		// 'attach' indica qual porta de controle o servo está ligado
  angS1 = 0;	// iniçiaizando 'angS1' em 0
  s1.write(angS1);		// escrevendo o ângulo no servo
}

void loop(){   // nax. porta analógica   max. para aplicação do servo
  angS1 = map(analogRead(pot), 0, 1023, 0, 180);		// 'angS1' recebe o retorno de 'map'
  s1.write(angS1);
  delay(100);
  }