#include "moto.h"

Moto::Moto(){
    kilometros = 0;
    precioKm = 0;
}

Moto::Moto(string matricula, int id, float kilometros, float precioKm) : Vehiculo(matricula, id) {
    this->kilometros=kilometros;
    this->precioKm=precioKm;
}

float Moto::calcularCoste() {
    return kilometros*precioKm;
}