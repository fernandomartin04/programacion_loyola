#ifndef _ESTADOTAREAS_H_
#define _ESTADOTAREAS_H_

#include<iostream>
#include"soluciontareas.h"

using namespace std;

class EstadoTareas
{
	private:
		SolucionTareas sol;
		int nTareas_asignadas;
		int nTareas_totales;
		
	public:
		//Constructor
		EstadoTareas(int nprocesadores, int ntareas)
		{
			sol=SolucionTareas(nprocesadores);
			setNTareasAsignadas(0);
			setNTareasTotales(ntareas);
		}
		
		//Observadores
		SolucionTareas getSolucion() const {return sol;}
		int getNTareasAsignadas() const {return nTareas_asignadas;}
		int getNTareasTotales() const {return nTareas_totales;}
		
		//Modificadores
		void setSolucion(SolucionTareas const & s){sol=s;}
		void setNTareasAsignadas(int n){nTareas_asignadas=n;}
		void setNTareasTotales(int n){nTareas_totales=n;}
		
		//Funciones de estado
		void avanza(int id, Tarea const & t);
		void retrocede(int id, Tarea const & t);
		list <int> getAlternativas();
		int getMejorAlternativa();
		bool esFinal();
};

#endif
