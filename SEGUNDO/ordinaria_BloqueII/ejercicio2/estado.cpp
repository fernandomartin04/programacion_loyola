#include<iostream>
#include"estado.h"

using namespace std;

//TODO Funciones de estado
void Estado::avanza(Zona const & z)
{
    setNVisitados(getNvisitados() + 1);
    setNValidos(getNValidos() + z.getCantidad());
    sol.addZona(z);
}


void Estado::retrocede(Zona const & z)
{
    setNVisitados(getNvisitados() - 1);
    setNValidos(getNValidos() - z.getCantidad());
    sol.deleteZona(z);
}

list <Zona> Estado::getAlternativas(Zona const & z)
{

}

bool Estado::esFinal()
{
	
}
