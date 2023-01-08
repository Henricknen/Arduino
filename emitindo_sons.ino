#define som 9

void setup(){
  pinMode(som, OUTPUT);
}

void loop(){
  tone(som, 200, 500);		// 'tone' é uma função que necessita de três parâmetros 'porta' , 'frequençia' e 'duração'
  delay(550);		// este 'dalay' dará uma pausa no toque
    tone(som, 300, 500);
  delay(550);
    tone(som, 400, 500);
  delay(550);
    tone(som, 500, 500);
  delay(550);
    tone(som, 600, 500);
  delay(3000);
  delay(5000);
  }