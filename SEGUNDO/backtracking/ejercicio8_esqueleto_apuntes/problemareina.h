#ifndef _PROBLEMAREINA_H_
#define _PROBLEMAREINA_H_

#include<iostream>
#include<list>
#include"estadoreina.h"

using namespace std;

class ProblemaReina
{
	private:
		int numReinas;
		int numSoluciones;
		list <SolucionReina> l;
		
	public:
		//Constructor
		ProblemaReina(int nr)
		{
			setNumReinas(nr);
			setNumSoluciones(0);
		}
		
		//Observadores
		int getNumReinas() const {return numReinas;}
		int getNumSoluciones() const {return numSoluciones;}
		list <SolucionReina> getSoluciones() const {return l;}
		
		//Modificadores
		void setNumReinas(int nr){numReinas=nr;}
		void setNumSoluciones(int ns){numSoluciones=ns;}
		void setSoluciones(list <SolucionReina> const & l2){l=l2;}
		
		// TODO Funciones de los algoritmos
		list <SolucionReina> ejecutaBacktracking();
		void bt(EstadoReina & e);
		list <SolucionReina> ejecutaVoraz();
		void vorazR(EstadoReina & e);
		void actualizarSoluciones(EstadoReina & e);

};

#endif
