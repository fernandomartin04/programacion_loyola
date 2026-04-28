#include "jugador.h"

Jugador::Jugador() {
    nombre = "";
    dorsal = 0;
    nro_partidos = 8;
    historial_clubes = nullptr;
}
Jugador::Jugador(string nombre, int dorsal) {
    this->nombre = nombre;
    this->dorsal = dorsal;
    this->nro_partidos = 8;
    this->historial_clubes = nullptr;
}

Jugador::Jugador(Jugador const &otro) {
    if (this != &otro) {
        delete historial_clubes;
        nombre = otro.nombre;
        dorsal = otro.dorsal;
        nro_partidos = otro.nro_partidos;
        if (otro.historial_clubes != nullptr) {
            historial_clubes = new string(*otro.historial_clubes);
        } else {
            historial_clubes = nullptr;
        }
    }
    return *this;
}

Jugador::~Jugador() {
    if (historial_clubes != nullptr) {
        delete historial_clubes;
    }
}

float Jugador::calcularValoracion() {
    return 0.0;
}

string Jugador::toString() {
    return "Nombre: " + nombre + ". Dorsal: " + to_string(dorsal) + ". Número de partidos: " + to_string(nro_partidos);
}

void Jugador::agregarClub(string club) {
    if (historial_clubes == nullptr) {
        historial_clubes = new string(club);
    } else {
        *historial_clubes += ", " + club;
    }
}

Jugador& Jugador::operator=(const Jugador& otro) {
    if (this != &otro) {
        delete historial_clubes;
        nombre = otro.nombre;
        dorsal = otro.dorsal;
        nro_partidos = otro.nro_partidos;
        if (otro.historial_clubes != nullptr) {
            historial_clubes = new string(*otro.historial_clubes);
        } else {
            historial_clubes = nullptr;
        }
    }
    return *this;
}