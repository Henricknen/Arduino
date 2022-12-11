int led_vermelho = 8;	// variável 'led_vermelho'
int led_amarelo = 9;		// variável 'led_amarelo'
int led_verde = 10;				// variável 'led_verde'
//
void setup()
{
  pinMode(led_vermelho, OUTPUT);		// definindo as portas como de sida 'output'
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop()		// controlando o estado de cada uma destas portas
{
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  delay(7000);		// esperndo um tempo de 7 segundos
  
   digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(9000); 		 	// 'led_verde' ficará acesso por 9 segundos
  
    digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(2000);			// 'led_amarelo' ficará acesso por 2 segundos
}