#include<iostream>
#include"sensor.h"

using namespace std;		
		
//SOBRECARGA
Sensor & Sensor::operator = (Sensor const & s)
{
	setCodSensor(s.getCodSensor());
	setNivelPrecision(s.getNivelPrecision());
	return *this;
}

bool Sensor::operator < (Sensor const & s) const
{
	return getNivelPrecision() > s.getNivelPrecision();
}

//FUNCION DE SALIDA
void Sensor::mostrar() const
{
	cout << "(Sensor: " << getCodSensor() << ", Precision: " << getNivelPrecision() << ")" << endl;
}
