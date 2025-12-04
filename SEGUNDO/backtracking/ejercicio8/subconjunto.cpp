#include<iostream>
#include"subconjunto.h"

using namespace std;

//Sobrecarga
Subconjunto & Subconjunto::operator = (Subconjunto const & s)
{
	setDatos(s.getDatos());
	setPeso(s.getPeso());
	setCantidad(s.getCantidad());
	setPU(s.getPU());
	return *this;
}

bool Subconjunto::operator < (Subconjunto const & s) const
{
	return getPU() < s.getPU();
}

//Funcion de salida
void Subconjunto::mostrar() const
{
	cout << "{";
	set <int>::const_iterator it=datos.begin();
	while(it!=datos.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << "(" << getPeso() << ")}" << endl;
}

