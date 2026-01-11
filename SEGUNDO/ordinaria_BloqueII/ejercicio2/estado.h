#ifndef _ESTADO_H_
#define _ESTADO_H_

#include<iostream>
#include"solucion.h"

using namespace std;

class Estado
{
	private:
		Solucion sol;
		int nVisitados;
		int nValidos;
		int nTotal;
		
	public:
		//Constructor
		Estado(int n)
		{
			setNTotal(n);
			setNValidos(0);
			setNVisitados(0);
		}
		
		//Observadores
		Solucion getSolucion() const {return sol;}
		int getNVisitados() const {return nVisitados;}
		int getNValidos() const {return nValidos;}
		int getNTotal() const {return nTotal;}
		
		//Modificadores
		void setSolucion(Solucion const & s){sol=s;}
		void setNVisitados(int n){nVisitados=n;}
		void setNValidos(int n){nValidos=n;}
		void setNTotal(int n){nTotal=n;}
		
		//TODO Funciones de estado
		void avanza(Zona const & z);
		void retrocede(Zona const & z);
		list <Zona> getAlternativas(Zona const & z);
		bool esFinal();
		


};

#endif
