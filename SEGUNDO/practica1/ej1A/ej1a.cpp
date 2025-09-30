#include "ej1a.h"

Fraccion::Fraccion() {
	numerador = 0;
	denominador = 1;
}
Fraccion::Fraccion(int num, int den){
	if (den == 0) {
		throw ZeroException("a");
	}
	numerador = num;
	denominador = den;
}

int Fraccion::getNumerador() {
	return numerador;
}

int Fraccion::getDenominador() {
	return denominador;
}

void Fraccion::setNumerador() {
	numerador = num;
}

void Fraccion::setDenominador() {
	if (den == 0) {
		throw ZeroException("El denominador no puede ser 0");
	}
	denominador = den;
}
