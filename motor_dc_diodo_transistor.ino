#define motor 2		// 'definição' da porta 2 do motor
int tempo = 2000;		// variável de tempo

void setup(){
  pinMode(motor, OUTPUT);
  digitalWrite(motor, HIGH);
}

void loop(){
  digitalWrite(motor, HIGH);		// definindo o estado (ligado) da porta digita '2'
  delay(tempo);		// dando um tempo instançiado na variável 'tempo'
  digitalWrite(motor, LOW);// estado(desigado)
  delay(tempo);		// esperando de mais 2 segundos com ele desigado
  }