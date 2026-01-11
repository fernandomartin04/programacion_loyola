#include<iostream>
#include"sensor.h"
#include"zona.h"

using namespace std;

//Sobrecarga
Zona & Zona::operator=(Zona const & z)
{
	setCodZona(z.getCodZona());
	setNombre(z.getNombre());
	setCantidad(z.getCantidad());
	setSensor(z.getSensor());
	return *this;
}
bool Zona::operator < (Zona const & z) const
{
	return getSensor() < z.getSensor();
}

//Funcion de salida
void Zona::mostrar() const
{
	cout << "Zona: " << getNombre() << "(cod: " << getCodZona() << ") instala Sensor ";
	getSensor().mostrar();
}
