#ifndef _ESTADOMOCHILA_H_
#define _ESTADOMOCHILA_H_

#include<iostream>
#include"solucionmochila.h"
#include<list>

using namespace std;

class EstadoMochila
{
	private:
		SolucionMochila sol;
		int capacidadRestante;
		int objVisitados;
		int objTotales;
		
	public:
		//Constructor
		EstadoMochila(int c, int o)
		{
			setCapacidadRestante(c);
			setObjVisitados(0);
			setObjTotales(o);
		}
		
		//Observadores
		SolucionMochila getSol() const {return sol;}
		int getCapacidadRestante() const {return capacidadRestante;}
		int getObjVisitados() const {return objVisitados;}
		int getObjTotales() const {return objTotales;}
		
		//Modificadores
		void setSol(SolucionMochila const & s) {sol = s;}
		void setCapacidadRestante(int c) {capacidadRestante=c;}
		void setObjVisitados(int o){objVisitados=o;}
		void setObjTotales(int o){objTotales=o;}
		
		// TODO Funciones de estado
		void avanza(ObjetoMochila const & obj);
		void retrocede(ObjetoMochila const & obj);
		list <ObjetoMochila> getAlternativas(ObjetoMochila const & obj);
		ObjetoMochila getMejorAlternativa(ObjetoMochila const & obj);
		bool esFinal();
		
};

#endif
