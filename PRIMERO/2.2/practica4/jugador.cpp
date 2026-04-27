#include "jugador.h"

Jugador() {
    nombre = "";
    dorsal = 0;
    nro_partidos = 0;
}
Jugador(string nombre, int dorsal) {
    this->nombre = nombre;
    this->dorsal = dorsal;}
int calcularValoracion() {
    return nro_partidos * 10;
}
virtual string toString();