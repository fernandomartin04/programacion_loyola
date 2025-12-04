#include<iostream>
#include"problematareas.h"

using namespace std;

//Funciones de los algoritmos
SolucionTareas ProblemaTareas::ejecutaBacktracking()
{
	EstadoTareas e(getNumeroProcesadores(),getNumeroTareas());
	bt(e);
	return mejorSol;
}

void ProblemaTareas::bt(EstadoTareas & e)
{
	if(e.esFinal())
	{
		actualizarMejorSolucion(e);
	}
	else
	{
		list <Tarea>::iterator it=tareas_disponibles.begin();
		advance(it,e.getNTareasAsignadas());
		list <int> alts = e.getAlternativas();
		list <int>::iterator it2=alts.begin();
		while(it2!=alts.end())
		{
			e.avanza(*it2,*it);
			bt(e);
			e.retrocede(*it2,*it);
			it2++;
		}
	}
}

SolucionTareas ProblemaTareas::ejecutaVoraz()
{
	EstadoTareas e(getNumeroProcesadores(),getNumeroTareas());
	vorazR(e);
	return mejorSol;
}

void ProblemaTareas::vorazR(EstadoTareas & e)
{
	if(e.esFinal())
	{
		actualizarMejorSolucion(e);
	}
	else
	{
		list <Tarea>::iterator it=tareas_disponibles.begin();
		advance(it,e.getNTareasAsignadas());
		int alt = e.getMejorAlternativa();
		e.avanza(alt,*it);
		vorazR(e);
	}
}

void ProblemaTareas::actualizarMejorSolucion(EstadoTareas & e)
{
	if(e.getSolucion() > mejorSol || mejorSol.getTiempoTotal()==0)
	{
		mejorSol=e.getSolucion();
	}
}
