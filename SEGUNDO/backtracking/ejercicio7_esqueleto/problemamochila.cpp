#include<iostream>
#include"estadomochila.h"
#include"solucionmochila.h"
#include"problemamochila.h"

using namespace std;

// TODO Funciones para los algoritmos
SolucionMochila ProblemaMochila::ejecutaBacktracking()
{
    EstadoMochila e(getCapacidadTotal(), getObjDisponibles().size());
    bt(e);
    return mejorSol;
}

void ProblemaMochila::bt(EstadoMochila & e)
{
    if(e.esFinal()) return actualizarMejorSolucion(e);

    else {
        list<ObjetoMochila>::iterator it=objDisponibles.begin();
        advance(it, e.getObjVisitados());

        list<ObjetoMochila> alts = e.getAlternativas(*it);
        list<ObjetoMochila>::iterator it2 = alts.begin();

        while(it2 != alts.end()) {
            e.avanza(*it2);
            bt(e);
            e.retrocede(*it2);
            it2++;
        }
    }
    
}

SolucionMochila ProblemaMochila::ejecutaVoraz()
{
    EstadoMochila e(getCapacidadTotal(), getObjDisponibles().size());
    vorazR(e);
    return mejorSol;
}

void ProblemaMochila::vorazR(EstadoMochila & e)
{
    if(e.esFinal()) return actualizarMejorSolucion(e);
    else {
        list<ObjetoMochila>::iterator it=objDisponibles.begin();
        advance(it, e.getObjVisitados());

        ObjetoMochila alt = e.getMejorAlternativa(*it);
        e.avanza(alt);
        vorazR(e);
    }
}

void ProblemaMochila::actualizarMejorSolucion(EstadoMochila & e)
{
    if(e.getSol() > getMejorSol()) setMejorSol(e.getSol());
    
}
