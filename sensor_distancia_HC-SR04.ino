#include <HCSR04.h>		// include a biblioteca 'HCSR04'

# define p_trigger 4
# define p_echo 5

UltrasonicDistanceSensor distanceSensor(p_trigger, p_echo);

float dist_cm, dist_m;

void setup(){
  Serial.begin(9600)		// inicializando 'Serial' para imprimir no console a distância
}

void loop(){
  dist_cm = distanceSensor.measureDistanceCm();		// faz o retorno automaticamente em 'cm'
  dist_m = dist_cm / 100;		// convertendo em metros
  Serial.print("Distancia: ");
  Serial.print(dist_cm);
  Serial.print("cm | ");
  Serial.print(dist_m);
  Serial.println("m ")
  Serial.println("--------------------------------------");
  delay(1000);		// a cada 1 segundo fará medição em 'Cm'
  }