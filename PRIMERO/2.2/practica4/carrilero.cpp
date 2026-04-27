#include "carrilero.h"

Carrilero::Carrilero() : Atacante(), Defensor() {}
Carrilero::Carrilero(string nombre, int dorsal, int goles_marcados, int balones_recuperados) 
    : Jugador(nombre, dorsal), 
    Atacante(nombre, dorsal, goles_marcados), Defensor(nombre, dorsal, balones_recuperados) {}

float Carrilero::calcularValoracion() {
    return float(Atacante::calcularValoracion()*0.25 + Defensor::calcularValoracion()*0.75);
}

string Carrilero::toString() {
    return "Nombre: " + nombre +
           ". Dorsal: " + to_string(dorsal) +
           ". Número de partidos: " + to_string(nro_partidos) +
           ". Goles: " + to_string(goles_marcados) +
           ". Balones: " + to_string(balones_recuperados);
}  