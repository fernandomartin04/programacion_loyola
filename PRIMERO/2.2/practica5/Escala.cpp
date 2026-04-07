#include "Escala.h"

Escala::Escala(int min, int max) {
    minimo_escala = min;
    maximo_escala = max;
}

void Escala::escalar(Puntaje& p) {

    if(p.puntos < minimo_escala)
        p.puntos = minimo_escala;

    if(p.puntos > maximo_escala)
        p.puntos = maximo_escala;
}