#include "SensorTemperatura.h"

SensorTemperatura::SensorTemperatura(float temp) {
    valor_lectura = temp;
}

float SensorTemperatura::getLectura() {
    return valor_lectura;
}

bool SensorTemperatura::operator>(const SensorTemperatura &otro){
	return valor_lectura > otro.valor_lectura;
}

ostream& operator<<(ostream &os, SensorTemperatura &sensor) {
	os << "[TEMPERATURA] Datos: " << sensor.valor_lectura;
	return os;
}

istream& operator>>(istream &is, SensorTemperatura &sensor) {
	is >> sensor.valor_lectura;
	return is;
}
