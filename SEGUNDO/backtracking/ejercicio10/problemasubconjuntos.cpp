#include<iostream>
#include"problemasubconjuntos.h"

using namespace std;

//Funciones de los algoritmos
list <SolucionSubconjuntos> ProblemaSubconjuntos::ejecutaBacktracking()
{
	EstadoSubconjuntos e(elementos.size(),getSumaDeseada());
	bt(e);
	return soluciones;
}

void ProblemaSubconjuntos::bt(EstadoSubconjuntos & e)
{
	if(e.esFinal())
	{
		actualizarSoluciones(e);
	}
	else
	{
		set <Numero>::iterator it=elementos.begin();
		advance(it,e.getNElementosVisitados());
		list <Numero> alts = e.getAlternativas(*it);
		list <Numero>::iterator it2 = alts.begin();
		while(it2!=alts.end())
		{
			e.avanza(*it2);
			bt(e);
			e.retrocede(*it2);
			*it2++;
		}
	}
}

list <SolucionSubconjuntos> ProblemaSubconjuntos::ejecutaVoraz()
{
	EstadoSubconjuntos e(elementos.size(),getSumaDeseada());
	vorazR(e);
	return soluciones;
}

void ProblemaSubconjuntos::vorazR(EstadoSubconjuntos & e)
{
	if(e.esFinal())
	{
		actualizarSoluciones(e);
	}
	else
	{
		set <Numero>::iterator it=elementos.begin();
		advance(it,e.getNElementosVisitados());
		Numero alt = e.getMejorAlternativa(*it);
		e.avanza(alt);
		vorazR(e);
	}
}

void ProblemaSubconjuntos::actualizarSoluciones(EstadoSubconjuntos & e)
{
	if(e.getSumaRestante()==0)
	{
		soluciones.push_back(e.getSolucion());
	}
}
