// variável global
int led = 10;// declarando variável que serve para inidicar o numero da porta do 'arduino'

void setup()
{
  pinMode(led, OUTPUT);// definindo o pino em 'output'de saida
}

void loop()		// mudando o estado da 'porta'
{
  digitalWrite(led, HIGH);
  delay(2000); // dando tempo de ligado de 2 segundos 
  digitalWrite(led, LOW);
  delay(2000);		// dando tempo de desligado de 2 segundos
}