#include<iostream>
#include"solucionrecubrimiento.h"

using namespace std;

//Sobrecarga
SolucionRecubrimiento & SolucionRecubrimiento::operator=(SolucionRecubrimiento const & s)
{
	setSubconjuntos(s.getSubconjuntos());
	setUniversoGenerado(s.getUniversoGenerado());
	setNuevosElementos(s.getNuevosElementos());
	setPesoTotal(s.getPesoTotal());
	return *this;
}
bool SolucionRecubrimiento::operator > (SolucionRecubrimiento const & s) const
{
	return getPesoTotal() < s.getPesoTotal();
}

//Funcion de salida
void SolucionRecubrimiento::mostrar() const
{
	cout << "Subconjuntos: " << endl;
	list <Subconjunto>::const_iterator it=subconjuntos.begin();
	while(it!=subconjuntos.end())
	{
		it->mostrar();
		it++;
	}
	cout << "Universo generado: ";
	set <int>::const_iterator it2=universo_generado.begin();
	cout << "{ ";
	while(it2!=universo_generado.end())
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << "}" << endl;
	cout << "Peso total: " << getPesoTotal() << endl;
}

// TODO Funciones para insertar y eliminar un subconjunto de la solucion
void SolucionRecubrimiento::addSubconjunto(Subconjunto const & sub)
{

}

void SolucionRecubrimiento::deleteSubconjunto(Subconjunto const & sub)
{

}
