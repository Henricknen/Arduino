#define ledR 2		// definição do led em R que eta ligado no pino 2
#define ledG 4			// definição do led em G que eta ligado no pino 4
#define ledB 3				// definição do led em B que eta ligado no pino 3
#define botao 7
#define maximo 6

// rotina que verifica se botão está clicado
int btnclicado = 0;
int btnliberado = 0;	// variáveis
int ciclo = 0;

void vermelho(){		// está função define o estado dos pinos para o led ficar vermelho
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}
void verde(){		// está função define o estado dos pinos para o led ficar verde
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}
void azul(){			// está função define o estado dos pinos para o led ficar azul
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}
void amarelo(){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}
void ciano(){
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, HIGH);
}
void magenta(){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}
void trocaLed(){		// função para fazer troca do 'led' que chamará a função correspondente com a sua condição
  if(ciclo == 0){
    vermelho();
  }else if(ciclo == 1){
    verde();
  }else if(ciclo == 2){
    azul();
  }else if(ciclo == 3){
    amarelo();
  }else if(ciclo == 4){
    ciano();
  }else if(ciclo == 5){
    magenta();
  }
  ciclo++;		// incrementando o valor de 'ciclo' em 1
  if(ciclo > maximo - 1){
    ciclo = 0;
  }
}
void verificaBtn(){
  if(digitalRead(botao) == HIGH){
    btnclicado = 1;
    btnliberado = 0;
  }else{
    btnliberado = 1;
  }
  if((btnclicado == 1) and (btnliberado == 1)){		// se igual a 1 a função de troca de led será chamada
    btnclicado = 0;
    btnliberado = 0;
    trocaLed();		// função que trocará acor do 'led'
  }
}

void setup() {
  pinMode(ledR, OUTPUT);		// configrando os pinos
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(botao, INPUT);

}

void loop() {
  verificaBtn();
}
