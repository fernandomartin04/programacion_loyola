#include<iostream>
#include"estado.h"

using namespace std;

//TODO Funciones de estado
void Estado::avanza(Zona const & z)
{
	sol.addZona(z);
	setNValidos(getNValidos()+z.getCantidad());
	setNVisitados(getNVisitados()+1);
	
}

void Estado::retrocede(Zona const & z)
{
	sol.deleteZona(z);
	setNValidos(getNValidos()-z.getCantidad());
	setNVisitados(getNVisitados()-1);
}

list <Zona> Estado::getAlternativas(Zona const & z)
{
	list<Zona> l;
	l.push_back(z);
	if(getSolucion().getZonasUsadas().count(z.getCodZona())==0 && getSolucion().getSensoresAsignados().count(z.getSensor().getCodSensor())==0){
		Zona zn(z);
		zn.setCantidad(1);
		l.push_back(zn);
	}
	return l;
}

bool Estado::esFinal()
{
	return getNVisitados()==(getNTotal()*getNTotal()) || getNValidos()==getNTotal();	
	
}
