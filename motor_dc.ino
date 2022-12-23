/*  O transistor ligo ou desliga o motor
	Se o pino base receber uma tensão, o transistor bloqueia a passagem da corrente
    Se o pino base não receber tesão, o transistor bloqueia a passagem da corrente*/

#define motor 2		// 'definição' da porta 2 do motor

void setup(){
  pinMode(motor, OUTPUT);
  digitalWrite(motor, HIGH);
}

void loop(){
  
}