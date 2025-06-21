#include "DatosGeneracion.h"

DatosGeneracion::DatosGeneracion() {
    generacion = 0.0;
    emisiones = 0.0;
    rendimiento = 0.0;
}

float DatosGeneracion::getGeneracion() {
    return generacion;
}

void DatosGeneracion::setGeneracion(float g) {
    generacion = g;
}

float DatosGeneracion::getEmisiones() {
    return emisiones;
}

void DatosGeneracion::setEmisiones(float e) {
    emisiones = e;
}

float DatosGeneracion::getRendimiento() {
    return rendimiento;
}

void DatosGeneracion::setRendimiento(float r) {
    rendimiento = r;
}