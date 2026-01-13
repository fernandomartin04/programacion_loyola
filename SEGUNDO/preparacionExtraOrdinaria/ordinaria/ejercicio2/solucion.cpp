#include<iostream>
#include"solucion.h"

using namespace std;
		
//Sobrecarga
Solucion & Solucion::operator = (Solucion const & s)
{
	setZonas(s.getZonas());
	setZonasUsadas(s.getZonasUsadas());
	setSensoresAsignados(s.getSensoresAsignados());
	setPrecisionTotal(s.getPrecisionTotal());
	return *this;
}

// TODO operador >
bool Solucion::operator > (Solucion const & s) const
{

}

//Funcion de salida
void Solucion::mostrar() const
{
	cout << "Precision de la solucion: " << getPrecisionTotal() << endl;
	list <Zona>::const_iterator it = zonas.begin();
	while(it!=zonas.end())
	{
		it->mostrar();
		it++;
	}
}

//TODO Funciones para insertar y eliminar
void Solucion::addZona(Zona const & z)
{
	
}

void Solucion::deleteZona(Zona const & z)
{

}
