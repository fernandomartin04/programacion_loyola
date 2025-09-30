#include "cabecera.h"

void Tiempo::normalizar(){
	if (minutos >= 60){
		horas += minutos/60;
		minutos = minutos%60;
	}
	else if (minutos < 0) {
		if (minutos % 60 == 0) {
			horas -= minutos/60;
		}
		else {
			horas -= (minutos/60 + 1);
			minutos = 60-(minutos%60);
		}
	}
}

Tiempo Tiempo::operator+(const Tiempo& t) const {
	int h = horas + t.horas;
	int m = minutos + t.minutos;
	Tiempo hm(h,m);
	hm.normalizar();
	return hm;
}

Tiempo Tiempo::operator-(const Tiempo& t) const {
	int h = horas - t.horas;
	int m = minutos - t.minutos;
	Tiempo hm(h,m);
	hm.normalizar();
	return hm;
}

bool Tiempo::operator==(const Tiempo& t) const {
	if(horas == t.horas && minutos == t.minutos){
		return true;
	} else{
		return false;
	}
}

ostream& operator<<(ostream& os, const Tiempo& t){
	return os <<t.horas<<" horas y "<<t.minutos<<" minutos";
};

