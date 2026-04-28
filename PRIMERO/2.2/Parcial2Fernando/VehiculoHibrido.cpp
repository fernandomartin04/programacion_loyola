#include "VehiculoHibrido.h"

VehiculoHibrido::VehiculoHibrido() : VehiculoElectrico() , VehiculoCombustion() {
    factor_ev = 0.5;
}

VehiculoHibrido & VehiculoHibrido::operator=(const VehiculoCombustion & v_c) {
	nivel_tanque = v_c.nivel_tanque;
	return *this;
}

float VehiculoHibrido::getAutonomia() {
	return getNivelBateria()*factor_ev*0.9f + getNivelTanque()*7.0f*(1-factor_ev);
}

string VehiculoHibrido::toString() {
    return VehiculoCombustion::toString() + " " + VehiculoElectrico::toString() + " Factor ev: " + to_string(factor_ev);
}

ostream & operator<<(ostream & os, const VehiculoHibrido & v) {
	os << "Coche Hibrido: " << v.nivel_bateria << " Kwh " << "Nivel tanque: " << v.nivel_tanque;
	return os;
}