#include <biblioteca_aultrassonico.h>

biblioteca_aultrassonico::biblioteca_aultrassonico(int pt, int pe) {
    this -> pino_trigger = pt;      // passando os valores dos parametros para as propriedades
    this -> pino_echo = pe;
    pinMode(pino_trigger, OUTPUT);       // definindo os modo do pino 'pino_trigger' que emite a onda
    pinMode(pino_echo, INPUT);              // definindo os modo do pino 'pino_echo' que recebe o sinal
}

double biblioteca_aultrassonico::distancia_cm() {
    digitalWrite(pino_trigger, LOW);
    delayMicroseconds(2);       // 1 miliSegundo = 1s / 1000 e 1 microSegundo = 1 miliSegundo / 1000
    digitalWrite(pino_trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(pino_trigger, LOW);
    unsigned long microsegundos = pulseIn(pino_echo, HIGH)       // medindo o pulso do pino
}
