#define btn_pin 3
#define led_pin 4

void setup() {
  pinMode(btn_pin,INPUT_PULLUP);		// com 'pullup' se a porta estiver no estado 'high' será considerada no estado 'low' ou vice verça
  pinMode(led_pin,OUTPUT);		// 'led' configurado como saida
}

void loop() {
  if(digitalRead(btn_pin)){		// verificando estado do botão
    digitalWrite(led_pin,digitalRead(btn_pin));		// se o retorno for 'true' o led acenderá 'HIGH'
  }else{
    digitalWrite(led_pin,digitalRead(btn_pin));		// se o retorno for 'false' o led estará apagado 'LOW'
  }

}

