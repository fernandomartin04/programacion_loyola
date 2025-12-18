#ifndef _PROBLEMAMOCHILA_H_
#define _PROBLEMAMOCHILA_H_

#include<iostream>
#include"estadomochila.h"
#include"solucionmochila.h"

using namespace std;

class ProblemaMochila
{
	private:
		list <ObjetoMochila> objDisponibles;
		int capacidadTotal;
		SolucionMochila mejorSol;
		
	public:
		//Constructor
		ProblemaMochila(list <ObjetoMochila> const & l, int c)
		{
			setObjDisponibles(l);
			setCapacidadTotal(c);
		}
		
		//Observadores
		list <ObjetoMochila> const & getObjDisponibles() const {return objDisponibles;}
		int getCapacidadTotal() const {return capacidadTotal;}
		SolucionMochila getMejorSol() const {return mejorSol;}
		
		//Modificadores
		void setObjDisponibles(list <ObjetoMochila> const & l){objDisponibles=l;}
		void setCapacidadTotal(int c){capacidadTotal=c;}
		void setMejorSol(SolucionMochila const & sol){mejorSol=sol;}
		
		// TODO Funciones para los algoritmos
		SolucionMochila ejecutaBacktracking();
		void bt(EstadoMochila & e);
		SolucionMochila ejecutaVoraz();
		void vorazR(EstadoMochila & e);
		void actualizarMejorSolucion(EstadoMochila & e);		

};

#endif
