#include "CaracteristicasFisicas.h"

CaracteristicasFisicas::CaracteristicasFisicas() {
    altura = 0.0;
    longitud = 0.0;
    peso = 0.0;
}

float CaracteristicasFisicas::getAltura() {
    return altura;
}
void CaracteristicasFisicas::setAltura(float a) {
    altura = a;
}

float CaracteristicasFisicas::getLongitud() {
    return longitud;
}
void CaracteristicasFisicas::setLongitud(float l) {
    longitud = l;
}

float CaracteristicasFisicas::getPeso(){
    return peso;
}
void CaracteristicasFisicas::setPeso(float p) {
    peso = p;
}
