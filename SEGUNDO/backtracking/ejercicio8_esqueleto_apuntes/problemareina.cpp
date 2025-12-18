#include<iostream>
#include<list>
#include"estadoreina.h"
#include"problemareina.h"

using namespace std;

// TODO Funciones de los algoritmos
list <SolucionReina> ProblemaReina::ejecutaBacktracking()
{
    EstadoReina e(getNumReinas());
    bt(e);
    return l;
}

void ProblemaReina::bt(EstadoReina & e)
{
    if(e.esFinal()) actualizarSoluciones(e);
    int aux = e.getNReinasColocadas();
    
    list<Reina> alts = e.getAlternativas(aux-1);
    list<Reina>::iterator it = alts.begin();
    while(it != alts.end()) {
        e.avanza(*it);
        bt(e);
        e.retrocede(*it);
        it++;
    }
    
}

list <SolucionReina> ProblemaReina::ejecutaVoraz()
{
    EstadoReina e(getNumReinas());
    vorazR(e);
    return getSoluciones();
}

void ProblemaReina::vorazR(EstadoReina & e)
{
    if(e.esFinal())
	{
		actualizarSoluciones(e);
	}
	else
	{
		Reina alt = e.getMejorAlternativa(e.getNReinasColocadas());
		if(alt.getColumna()!=-1)
		{
			e.avanza(alt);
			vorazR(e);
		}
	}
}

void ProblemaReina::actualizarSoluciones(EstadoReina & e)
{
    l.push_back(e.getSolucion());
	setNumSoluciones(getNumSoluciones()+1);
}
