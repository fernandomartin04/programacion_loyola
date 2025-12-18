#include<iostream>
#include"problemafestival.h"

using namespace std;
        
// TODO i) ejecutaBacktracking
SolucionFestival ProblemaFestival::ejecutaBacktracking()
{
    EstadoFestival e(getNumeroSalas(), getNumeroCortos());
    bt(e);
    return mejorSol;
}
// TODO j) bt
void ProblemaFestival::bt(EstadoFestival & e)
{
    if(e.esFinal()) actualizarMejorSolucion(e);

    else {
        list<Corto>::iterator it = cortos_disponibles.begin();
        advance(it, e.getNCortosAsignados());

        list<int> alts = e.getAlternativas();
        list<int>::iterator it2 = alts.begin();
        while(it2 != alts.end()) {
            e.avanza(*it2, *it);
            bt(e);
            e.retrocede(*it2, *it);
            it2++;
        }
    }
}
// TODO k) ejecutaVoraz
SolucionFestival ProblemaFestival::ejecutaVoraz()
{
    EstadoFestival e(getNumeroSalas(), getNumeroCortos());
    vorazR(e);
    return mejorSol;
}
// TODO l) vorazR
void ProblemaFestival::vorazR(EstadoFestival & e)
{
    if(e.esFinal()) actualizarMejorSolucion(e);

    else {
        list<Corto>::iterator it = cortos_disponibles.begin();
        advance(it, e.getNCortosAsignados());

        int alts = e.getMejorAlternativa();
        e.avanza(alts, *it);
        vorazR(e);
        
    }
}
// TODO m) actualizarMejorSolucion
void ProblemaFestival::actualizarMejorSolucion(EstadoFestival & e)
{
    if(e.getSolucion() > mejorSol || mejorSol.getTiempoTotal() == 0) {
        setMejorSolucion(e.getSolucion());
    }
    
}