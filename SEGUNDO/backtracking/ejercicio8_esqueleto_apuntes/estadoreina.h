#ifndef _ESTADOREINA_H_
#define _ESTADOREINA_H_

#include<iostream>
#include<list>
#include"solucionreina.h"

using namespace std;

class EstadoReina
{
	private:
		SolucionReina sol;
		int nReinasColocadas;
		int nReinasTotales;
		
	public:
		//CONSTRUCTOR
		EstadoReina(int nr)
		{
			nReinasColocadas=0;
			nReinasTotales=nr;
		}
		
		//Observadores
		SolucionReina getSolucion() const { return sol;}
		int getNReinasColocadas() const {return nReinasColocadas;}
		int getNReinasTotales() const {return nReinasTotales;}
		
		//Modificadores
		void setSolucion(SolucionReina const & s){sol=s;}
		void setNReinasColocadas(int rc){nReinasColocadas=rc;}
		void setNReinasTotales(int rt){nReinasTotales=rt;}
		
		// TODO Funciones de estado
		void avanza(Reina const & r);
		void retrocede(Reina const & r);
		list <Reina> getAlternativas(int f);
		Reina getMejorAlternativa(int f);
		bool esFinal();
};

#endif
