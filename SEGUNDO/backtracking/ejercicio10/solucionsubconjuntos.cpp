#include<iostream>
#include"solucionsubconjuntos.h"

using namespace std;		

//Sobrecarga
SolucionSubconjuntos & SolucionSubconjuntos::operator = (SolucionSubconjuntos const & s)
{
	setSubconjunto(s.getSubconjunto());
	setSuma(s.getSuma());
	return *this;
}

//Funcion de salida
void SolucionSubconjuntos::mostrar() const
{
	set <Numero>::const_iterator it=subconjunto.begin();
	cout << "{ ";
	while(it!=subconjunto.end())
	{
		it->mostrar();
		cout << " ";
		it++;
	}
	cout << "}: " << getSuma() << endl;
}

//Funciones para insertar y eliminar un elemento de la solucion
void SolucionSubconjuntos::addElemento(Numero const & n)
{
	if(n.getCantidad()){
		subconjunto.insert(n);
		setSuma(getSuma()+n.getValor());
	}
}

void SolucionSubconjuntos::deleteElemento(Numero const & n)
{
	if(n.getCantidad()){
		subconjunto.erase(n);
		setSuma(getSuma()-n.getValor());
	}
}
