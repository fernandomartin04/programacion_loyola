#ifndef _PROBLEMARECUBRIMIENTO_H_
#define _PROBLEMARECUBRIMIENTO_H_

#include<iostream>
#include"estadorecubrimiento.h"

using namespace std;

class ProblemaRecubrimiento
{
	private:
		list <Subconjunto> subconjuntos_disponibles;
		SolucionRecubrimiento mejorSol;
		
	public:
		//Constructor
		ProblemaRecubrimiento(list <Subconjunto> const & l)
		{
			setSubconjuntosDisponibles(l);
		}
		
		//Observadores
		list <Subconjunto> getSubconjuntosDisponibles() const { return subconjuntos_disponibles;}
		SolucionRecubrimiento getMejorSolucion() const {return mejorSol;}
		
		//Modificadores
		void setSubconjuntosDisponibles(list <Subconjunto> const & l){subconjuntos_disponibles=l;}
		void setMejorSolucion(SolucionRecubrimiento const & s){mejorSol=s;}
		
		// TODO Funciones de los algoritmos
		SolucionRecubrimiento ejecutaBacktracking();
		void bt(EstadoRecubrimiento & e);
		SolucionRecubrimiento ejecutaVoraz();
		void vorazR(EstadoRecubrimiento & e);
		void actualizaMejorSolucion(EstadoRecubrimiento & e);
};

#endif
