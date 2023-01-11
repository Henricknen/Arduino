#include <IRremote.h>		// biblioteca 'IRremode'

#define recptor 11		// porta do 'arduino' que será manipulada
float valor;

IRrecv recIR(recptor)		// declaração do objeto da classe 'rcev'
 decode_results resultado		// vai fazer a codificação do resultado e passa o valor do sinal que recebeu


void setup(){
  Serial.begin(9600);// inicializando porta 'serial'
  recIR.enableIRIn();		// método que habilita o receptor infravermelho 'IR'
}

void loop() {
  if(recIR.decode(&resultado)){		// passando o endereço do resultado 
    Serial.print("Valor: ");
    Serial.println(resultado.value,HEX);		// escrevendo o 'valor' em hexadecima
    recIR.resume();
  }
}