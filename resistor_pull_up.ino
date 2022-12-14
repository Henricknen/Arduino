#define led 4		// definindo porta 4 para o led
#define btn 3			// definindo porta 3 para o botão
void setup(){
	pinMode(led, OUTPUT);
  	pinMode(btn, INPUT);
}

void loop(){		// verificando se 'btn' está pressionado
  if(digitalRead(btn) == HIGH){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);		// se 'btn' for pressionado deligara o led
  }
}