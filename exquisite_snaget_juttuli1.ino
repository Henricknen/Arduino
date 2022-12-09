// C++ code
//
void setup()		// método principal, é executado primeiro e apenas uma vez
{						// OUTPUT = Sida - INPUT = Entrada
  pinMode(13, OUTPUT);		// configurando o modo da porta, 'pinMode' define o estado do pino
}

void loop()		// método principal, que define o estado da porta, e é executado após o método 'setup'
{		// HIGH = Ligada(5v) - LOW = Desligada(0v)
  digitalWrite(13, HIGH);	// passando dois parâmetros que são o led da porta '13' e 'HIGH' ligado
  delay(2000);		// método 'delay' faz uma pausa na programação antes de continuar a execução
  digitalWrite(13, LOW);		// let estará desligado 'OW'
  delay(2000);
}