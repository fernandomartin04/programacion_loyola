#include<iostream>
#include"problema.h"

using namespace std;

//TODO Funciones de los algoritmos
Solucion Problema::ejecutaBacktracking()
{
    Estado e(getN());
    bt(e);
    return getMejorSolucion();

    EstadoAsignacion e(getN());
	bt(e);
	return getMejorSolucion();
}

void Problema::bt(Estado & e)
{

    if(e.esFinal()) {
        actualizaMejorSolucion(e);
    } else {
        
    }
}

void Problema::actualizaMejorSolucion(Estado & e)
{

}
