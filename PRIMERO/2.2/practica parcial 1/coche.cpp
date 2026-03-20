#include "coche.h"

Coche::Coche() {
    costeFijo=0;
}

Coche::Coche(string matricula, int id, float costeFijo) : Vehiculo(matricula, id) {
    this->costeFijo=costeFijo;
}

float Coche::calcularCoste() {
    return costeFijo;
}