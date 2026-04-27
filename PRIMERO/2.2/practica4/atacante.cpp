#include "atacante.h"

Atacante::Atacante() {
    goles_marcados = 0;
}

Atacante::Atacante(string nombre, int dorsal, int goles_marcados) : Jugador(nombre, dorsal) {
    this->goles_marcados = goles_marcados;
}

float Atacante::calcularValoracion() {
    return float(goles_marcados) / float(nro_partidos);
}
    
string Atacante::toString() {
    return Jugador::toString() + "Goles marcados: " + to_string(goles_marcados);
}
