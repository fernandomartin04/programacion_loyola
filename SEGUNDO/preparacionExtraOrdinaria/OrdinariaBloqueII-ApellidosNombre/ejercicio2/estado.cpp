#include<iostream>
#include"estado.h"

using namespace std;

//TODO Funciones de estado
void Estado::avanza(Zona const & z)
{
    setNVisitados(getNVisitados() + 1);
    setNValidos(getNValidos() + z.getCantidad());
    sol.addZona(z);
}

void Estado::retrocede(Zona const & z)
{
    setNVisitados(getNVisitados() - 1);
    setNValidos(getNValidos() - z.getCantidad());
    sol.deleteZona(z);
}

list <Zona> Estado::getAlternativas(Zona const & z)
{
    list<Zona> l;
    l.push_back(z);
    // Si esta zona no esta en las usadas ni el sensor asignado a la zona...
    if(getSolucion().getZonasUsadas().count(z.getCodZona())==0 && getSolucion().getSensoresAsignados().count(z.getSensor().getCodSensor())==0) {
        Zona zn(z);
        zn.setCantidad(1);
        l.push_back(zn);    
    }
    return l;
}

bool Estado::esFinal()
{
	return getNTotal() == getNValidos() && getNVisitados() == (getNTotal()*getNTotal());
}
