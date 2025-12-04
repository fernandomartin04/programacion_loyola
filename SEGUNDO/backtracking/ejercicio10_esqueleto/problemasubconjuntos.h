#ifndef _PROBLEMASUBCONJUNTOS_H_
#define _PROBLEMASUBCONJUNTOS_H_

#include<iostream>
#include"estadosubconjuntos.h"

using namespace std;

class ProblemaSubconjuntos
{
	private:
		set <Numero> elementos;
		int suma_deseada;
		list <SolucionSubconjuntos> soluciones;
		
	public:
		//Constructor
		ProblemaSubconjuntos(set <Numero> const & e, int s)
		{
			setElementos(e);
			setSumaDeseada(s);
		}
		
		//Observadores
		set <Numero> getElementos() const {return elementos;}
		int getSumaDeseada() const {return suma_deseada;}
		list <SolucionSubconjuntos> getSoluciones() const {return soluciones;}
		
		//Modificadores
		void setElementos(set <Numero> const & e){elementos=e;}
		void setSumaDeseada(int s){suma_deseada=s;}
		void setSoluciones(list <SolucionSubconjuntos> const & sols){soluciones = sols;}
		
		// TODO Funciones de los algoritmos
		list <SolucionSubconjuntos> ejecutaBacktracking();
		void bt(EstadoSubconjuntos & e);
		list <SolucionSubconjuntos> ejecutaVoraz();
		void vorazR(EstadoSubconjuntos & e);
		void actualizarSoluciones(EstadoSubconjuntos & e);
};

#endif
