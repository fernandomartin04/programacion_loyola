#include "VehiculoCombustion.h"

VehiculoCombustion::VehiculoCombustion() {
	nivel_tanque = 0;
}


VehiculoCombustion VehiculoCombustion::operator+(const int & carga) {
	VehiculoCombustion v;
	int suma = nivel_tanque + carga;
	if (suma >= 0 && suma <= 50) {
		v.nivel_tanque = suma;
	}
	return v;
}

VehiculoCombustion VehiculoCombustion::operator-(const int & consumo) {
	VehiculoCombustion v;
	int resta = nivel_tanque - consumo;
	if (resta >= 0 && resta <= 50) {
		v.nivel_tanque = resta;
	}
	return v;
}


int VehiculoCombustion::getNivelTanque() {
    return nivel_tanque;
}

float VehiculoCombustion::getAutonomia() {
    return float(nivel_tanque) * 8.0;
}


string VehiculoCombustion::toString() {
    return to_string(nivel_tanque);
}

ostream & operator<<(ostream & os, const VehiculoCombustion & v) {
	os << "Coche combustion: " << v.nivel_tanque << " lts";
	return os;
}
