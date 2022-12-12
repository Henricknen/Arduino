#define led 3		// direiva 'led' se encontra na porta '3'
#define maximo 16		// maximo da porta 'PWM' é de 255, 8 bit
#define minimo 0
#define tmp 100		// tempo de 100

void setup()	// configuração da porta
{
  pinMode(led, OUTPUT);	// 'led' é a porta que está sendo configurada e 'output' o modo dela
}

void loop()
{
  for(int i = minimo; i < maximo; i++) {		// led mudará progressivamente de apagado pra acesso
  	analogWrite(led, i);		// método 'analoglWrite' é usado para trabalhar com as portas analogicas ou as digitais 'PWM'
    delay(tmp);
}
  for(int i = maximo; i > minimo; i--) {		// led apagará progressivamente
    analogWrite(led, i);
    delay(tmp);
  }
}