#ifndef BIBLIOTECA_AULTRASSONICO_H_INCLUDED
#define BIBLIOTECA_AULTRASSONICO_H_INCLUDED

#include <Arduino.h>        // impotando o arquivo de cabeçalho 'arduino.h'

class biblioteca_aultrassonico {
public:     // métodos publicos
    biblioteca_aultrassonico(int pt, int pe);        // contrutor da classe com parâmetros
    double distancia_cm();      // retorna a distancia medida
    double distancia_m();
private:        // método privado
    int pino_trigger;    // propriedade 'pino_trigger'
    int pino_echo;     // propriedade 'pino_echo'

};

#endif // BIBLIOTECA_AULTRASSONICO_H_INCLUDED
