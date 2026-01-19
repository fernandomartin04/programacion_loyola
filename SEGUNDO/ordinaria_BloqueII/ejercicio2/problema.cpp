#include<iostream>
#include"problema.h"

using namespace std;

//TODO Funciones de los algoritmos
Solucion Problema::ejecutaBacktracking()
{
    Estado e(getN());
    bt(e);
    return getMejorSolucion();    
}

void Problema::bt(Estado & e)
{
    if (esFinal()) {
        actualizaMejorSolucion();
    }
    else {
        list<Zona>::iterator it = zonas_disponibles.begin();
        advance(it, e.getNVisitados());
        list<Zona> alts = e.getAlternativas(*it);
        list<Zona>::iterator it2 = alts.begin();
        while(it2!=alts.end()) {
            e.avanza(*it2);
            bt(e);
            e.retrocede(*it2);
            it2++;
        }

    }
}

void Problema::actualizaMejorSolucion(Estado & e)
{
    if(e.getNValidos() == getN() && e.getSolucion() > getMejorSolucion()) {
        setMejorSolucion(e.getSolucion());
    }
}
