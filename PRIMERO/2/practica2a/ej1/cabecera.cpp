#include "cabecera.h"
Rectangulo::Rectangulo(float alto, double ancho) {
	this->alto = alto;
	this->ancho = ancho;
}

// Obtener ancho
double Rectangulo::getAncho() {
	return ancho;
}

void Rectangulo::setAncho(double nuevo_ancho){
	ancho = nuevo_ancho;
}

float Rectangulo::getAlto() {
	return alto;
}

void Rectangulo::setAlto(float nuevo_alto) {
	alto = nuevo_alto;
}

void Rectangulo::cambiarAltoAncho (float nuevo_alto, double nuevo_ancho) {
	alto = nuevo_alto;
	ancho = nuevo_ancho;
}

