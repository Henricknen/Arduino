#define ldr A0
#define led 2
int vldr = 0;		// variável serve para receber o valor de leitura do 'ldr'

void setup(){
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  vldr = analogRead(ldr);		// 'vldr' recebe o valor de leitura da porta que está ligada ao 'ldr'
  if(vldr < 700){		// testando o valor de leitura do 'ldr' se maior que 900 o led acenderá
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  Serial.println(vldr);
  delay(100);
}