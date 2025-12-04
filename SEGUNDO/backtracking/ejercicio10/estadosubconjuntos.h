#ifndef _ESTADOSUBCONJUNTOS_H_
#define _ESTADOSUBCONJUNTOS_H_

#include<iostream>
#include<list>
#include"solucionsubconjuntos.h"

using namespace std;

class EstadoSubconjuntos
{
	private:
		SolucionSubconjuntos sol;
		int nElementos_visitados;
		int nElementos_totales;
		int suma_restante;
		
	public:
		//Constructor
		EstadoSubconjuntos(int nE, int s)
		{
			setNElementosVisitados(0);
			setNElementosTotales(nE);
			setSumaRestante(s);
		}
		
		//Observadores
		SolucionSubconjuntos getSolucion() const {return sol;}
		int getNElementosVisitados() const {return nElementos_visitados;}
		int getNElementosTotales() const {return nElementos_totales;}
		int getSumaRestante() const {return suma_restante;}
		
		//Modificadores
		void setSolucion(SolucionSubconjuntos const & s){sol=s;}
		void setNElementosVisitados(int n){nElementos_visitados=n;}
		void setNElementosTotales(int n){nElementos_totales=n;}
		void setSumaRestante(int suma){suma_restante=suma;}
		
		//Funciones de estado
		void avanza(Numero const & n);
		void retrocede(Numero const & n);
		list <Numero> getAlternativas(Numero const & n);
		Numero getMejorAlternativa(Numero const & n);
		bool esFinal();
};

#endif
