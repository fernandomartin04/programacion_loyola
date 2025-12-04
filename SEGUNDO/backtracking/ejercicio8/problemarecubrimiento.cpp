#include<iostream>
#include"problemarecubrimiento.h"

using namespace std;

//Funciones de los algoritmos
SolucionRecubrimiento ProblemaRecubrimiento::ejecutaBacktracking()
{
	EstadoRecubrimiento e(getSubconjuntosDisponibles());
	bt(e);
	return mejorSol;
}

void ProblemaRecubrimiento::bt(EstadoRecubrimiento & e)
{
	if(e.esFinal())
	{
		actualizaMejorSolucion(e);
	}
	else
	{
		list <Subconjunto>::iterator it=subconjuntos_disponibles.begin();
		advance(it,e.getNSubconjuntosVisitados());
		list <Subconjunto> l = e.getAlternativas(*it);
		list <Subconjunto>::iterator it2 = l.begin();
		while(it2!=l.end())
		{
			e.avanza(*it2);
			bt(e);
			e.retrocede(*it2);
			it2++;
		}
	}
}

SolucionRecubrimiento ProblemaRecubrimiento::ejecutaVoraz()
{
	EstadoRecubrimiento e(getSubconjuntosDisponibles());
	vorazR(e);
	return mejorSol;
}

void ProblemaRecubrimiento::vorazR(EstadoRecubrimiento & e)
{
	if(e.esFinal())
	{
		actualizaMejorSolucion(e);
	}
	else
	{
		list <Subconjunto>::iterator it=subconjuntos_disponibles.begin();
		advance(it,e.getNSubconjuntosVisitados());
		Subconjunto alt = e.getMejorAlternativa(*it);
		e.avanza(alt);
		vorazR(e);
	}
}

void ProblemaRecubrimiento::actualizaMejorSolucion(EstadoRecubrimiento & e)
{
	if((e.getSolucion().getUniversoGenerado()==e.getUniversoBuscado()) && (mejorSol.getPesoTotal()==0 || e.getSolucion() > mejorSol))
	{
		mejorSol=e.getSolucion();
	}
}
