#include "cabecera.h"

float Rectangulo::getAlto() const {
    return alto;
}
double Rectangulo::getAncho() const {
    return ancho;
}

void Rectangulo::setAlto(float nuevo_alto) {
    this->alto=nuevo_alto;
}
void Rectangulo::setAncho(double nuevo_ancho) {
    this->ancho=nuevo_ancho;
}

void Rectangulo::cambiarAltoAncho(float nuevo_alto, double nuevo_ancho) {
    this->ancho=nuevo_ancho;
    this->alto=nuevo_alto; 
}

