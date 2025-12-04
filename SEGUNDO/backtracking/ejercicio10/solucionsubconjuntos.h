#ifndef _SOLUCIONSUBCONJUNTOS_H_
#define _SOLUCIONSUBCONJUNTOS_H_

#include<iostream>
#include<set>
#include"numero.h"

using namespace std;

class SolucionSubconjuntos
{
	private:
		set <Numero> subconjunto;
		int suma;
		
	public:
		//Constructor
		SolucionSubconjuntos()
		{
			subconjunto.clear();
			setSuma(0);	
		}
		
		SolucionSubconjuntos(SolucionSubconjuntos const & s)
		{
			*this=s;
		}
		
		//Observadores
		set <Numero> getSubconjunto() const {return subconjunto;}
		int getSuma() const {return suma;}
		
		//Modificadores
		void setSubconjunto(set <Numero> const & s){subconjunto=s;}
		void setSuma(int n){suma=n;}
		
		//Sobrecarga
		SolucionSubconjuntos & operator = (SolucionSubconjuntos const & s);
		
		//Funcion de salida
		void mostrar() const;
		
		//Funciones para insertar y eliminar un elemento de la solucion
		void addElemento(Numero const & n);
		void deleteElemento(Numero const & n);
};

#endif
