#include<iostream>
#include<list>
#include"solucionmochila.h"

using namespace std;

bool SolucionMochila::operator > (SolucionMochila const & s) const
{
	if(getValorTotal() > s.getValorTotal())
	{
		return true;
	}
	else if(getValorTotal() == s.getValorTotal() && getPesoTotal() < s.getPesoTotal())
	{
		return true;
	}
	else
	{
		return false;
	}
}

// TODO Insertar y quitar objetos de la solucion
void SolucionMochila::addObjeto(ObjetoMochila const & obj)
{
	if(obj.getCantidad() > 0) {
		objs.push_back(obj);
		setValorTotal(getValorTotal() + obj.getValor()*obj.getCantidad());
		setPesoTotal(getPesoTotal() + obj.getPeso()*obj.getCantidad());
	}
}

void SolucionMochila::deleteObjeto(ObjetoMochila const & obj)
{
	if(obj.getCantidad() > 0) {
		objs.push_back(obj);
		setValorTotal(getValorTotal() - obj.getValor()*obj.getCantidad());
		setPesoTotal(getPesoTotal() - obj.getPeso()*obj.getCantidad());
	}
}

//Funcion de salida
void SolucionMochila::mostrar() const
{
	cout << "Valor Total: " << getValorTotal() << endl;
	cout << "Peso Total: " << getPesoTotal() << endl;
	list <ObjetoMochila>::const_iterator it = objs.begin();
	while(it!=objs.end())
	{
		it->mostrar();
		it++;
	}
}
