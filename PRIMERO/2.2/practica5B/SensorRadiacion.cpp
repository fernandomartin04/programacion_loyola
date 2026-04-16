#include "SensorRadiacion.h"

SensorRadiacion::SensorRadiacion(int rad){
    valor_lectura=rad;
}

int SensorRadiacion::getLectura() {
    return valor_lectura;
}

bool SensorRadiacion::operator>(const SensorRadiacion &otro){
	return valor_lectura > otro.valor_lectura;
}

ostream& operator<<(ostream &os, SensorRadiacion &sensor) {
	os << "[TEMPERATURA] Datos: " << sensor.valor_lectura;
	return os;
}

istream& operator>>(istream &is, SensorRadiacion &sensor) {
	is >> sensor.valor_lectura;
	return is;
}