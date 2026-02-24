#include "cabecera.h"

string Ascensor::getPlantaActual() const {
    return plantaActual;
}

void Ascensor::seleccionarPlanta(int planta) {
    this->plantaActual=planta;
}

bool Ascensor::abrirPuerta() {
    this->puertaAbierta = true;
    return true;
}
bool Ascensor::cerrarPuerta() {
    this->puertaAbierta = false;
    return true;
}

bool Ascensor::isPuertaAbierta() const {
    if(puertaAbierta == true) return true;
    else return false;
}
bool Ascensor::isSobrecargado() const {
    if(puertaAbierta == true) return true;
    else return false;
}


