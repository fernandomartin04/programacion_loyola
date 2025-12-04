#ifndef _PROBLEMATAREAS_H_
#define _PROBLEMATAREAS_H_

#include<iostream>
#include"estadotareas.h"

using namespace std;

class ProblemaTareas
{
	private:
		list <Tarea> tareas_disponibles;
		int numero_procesadores;
		int numero_tareas;
		SolucionTareas mejorSol;
		
	public:
		//Constructor
		ProblemaTareas(list <Tarea> const & l, int n)
		{
			setTareasDisponibles(l);
			setNumeroProcesadores(n);
			setNumeroTareas(l.size());
		}
		
		//Observadores
		list <Tarea> getTareasDisponibles() const {return tareas_disponibles;}
		int getNumeroProcesadores() const {return numero_procesadores;}
		int getNumeroTareas() const {return numero_tareas;}
		SolucionTareas getMejorSolucion() const {return mejorSol;}
		
		//Modificadores
		void setTareasDisponibles(list <Tarea> const & l){tareas_disponibles=l;}
		void setNumeroProcesadores(int n){numero_procesadores=n;}
		void setNumeroTareas(int n){numero_tareas=n;}
		void setMejorSolucion(SolucionTareas const & s){mejorSol=s;}
		
		//Funciones de los algoritmos
		SolucionTareas ejecutaBacktracking();
		void bt(EstadoTareas & e);
		SolucionTareas ejecutaVoraz();
		void vorazR(EstadoTareas & e);
		void actualizarMejorSolucion(EstadoTareas & e);
};

#endif
