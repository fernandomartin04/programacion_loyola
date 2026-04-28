#include "VehiculoElectrico.h"


VehiculoElectrico::VehiculoElectrico() {
    nivel_bateria = 0;
}
VehiculoElectrico & VehiculoElectrico::operator+=(const int& carga) {
	int suma = nivel_bateria + carga;
	if (suma >= 0 && suma <= 100) {
		this->nivel_bateria += carga;		
	}
	return *this;
	
}

VehiculoElectrico & VehiculoElectrico::operator-=(const int& consumo) {
	int resta = nivel_bateria - consumo;
	if (resta >= 0 && resta <= 100) {
		this->nivel_bateria -= consumo;		
	}
	return *this;
}

int VehiculoElectrico::getNivelBateria() {
    return nivel_bateria;
}

float VehiculoElectrico::getAutonomia() {
	return float(nivel_bateria)*1.5;
}

string VehiculoElectrico::toString() {
	return to_string(nivel_bateria);
}

ostream & operator<<(ostream & os, const VehiculoElectrico & v) {
	os << "Coche electrico: " << v.nivel_bateria << " Kwh";
	return os;
}