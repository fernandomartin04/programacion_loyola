#include<iostream>
#include"objetomochila.h"

using namespace std;

bool ObjetoMochila::operator < (ObjetoMochila const & obj) const
{
	if(getQ() > obj.getQ())
	{
		return true;
	}
	else if(getQ() == obj.getQ() && getValor() > obj.getValor())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ObjetoMochila::mostrar() const
{
	cout << "Objeto: " << getNombre() << " - Valor: " << getValor() << " - Peso: " << getPeso() << " - Cantidad: " << getCantidad() << " - q: " << getQ() << endl;
}
