#include "defensor.h"

Defensor::Defensor() {
    balones_recuperados = 0;
}

Defensor::Defensor(string nombre, int dorsal, int balones_recuperados) : Jugador(nombre, dorsal) {
    this->balones_recuperados = balones_recuperados;
}

float Defensor::calcularValoracion() {
    return (balones_recuperados / float(nro_partidos)) * 0.1;
}

string Defensor::toString() {
    return Jugador::toString() + "Balones recuperados: " + to_string(balones_recuperados);
}