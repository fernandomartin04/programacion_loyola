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
	return getPrecisionTotal() > s.getPrecisionTotal();
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
	zonas.push_back(z);
	zonas_usadas.insert(z.getCodZona());
	setPrecisionTotal(getPrecisionTotal() + z.getSensor().getNivelPrecision());
	sensores_asignados.insert(z.getSensor().getCodSensor());
}

void Solucion::deleteZona(Zona const & z)
{
	zonas.pop_back();
	zonas_usadas.erase(z.getCodZona());
	sensores_asignados.erase(z.getSensor().getCodSensor());
	setPrecisionTotal(getPrecisionTotal()-z.getSensor().getNivelPrecision());
}
