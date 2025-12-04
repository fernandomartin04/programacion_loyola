#ifndef _ESTADORECUBRIMIENTO_H_
#define _ESTADORECUBRIMIENTO_H_

#include<iostream>
#include"solucionrecubrimiento.h"

using namespace std;

class EstadoRecubrimiento
{
	private:
		SolucionRecubrimiento sol;
		int nSubconjuntos_visitados;
		int nSubconjuntos_totales;
		set <int> universo_buscado;
		
	public:
		//Constructor
		EstadoRecubrimiento(list <Subconjunto> const & l)
		{
			setNSubconjuntosVisitados(0);
			setNSubconjuntosTotales(l.size());
			list <Subconjunto>::const_iterator it=l.begin();
			set <int>::iterator it2;
			set <int> datos;
			while(it!=l.end())
			{
				datos = it->getDatos();
				it2 = datos.begin();
				while(it2!=datos.end())
				{
					universo_buscado.insert(*it2);
					it2++;
				}
				it++;
				datos.clear();
			}
		}
		
		//Observadores
		SolucionRecubrimiento getSolucion() const {return sol;}
		int getNSubconjuntosVisitados() const {return nSubconjuntos_visitados;}
		int getNSubconjuntosTotales() const {return nSubconjuntos_totales;}
		set <int> getUniversoBuscado() const {return universo_buscado;}
		
		//Modificadores
		void setSolucion(SolucionRecubrimiento const & s){sol=s;}
		void setNSubconjuntosVisitados(int n){nSubconjuntos_visitados=n;}
		void setNSubconjuntosTotales(int n){nSubconjuntos_totales=n;}
		void setUniversoBuscado(set <int> const & s){universo_buscado=s;}
		
		//Funcion auxiliar que indica si todos los elementos de un subconjunto ya estan en una solucion parcial
		bool isIn(Subconjunto const & s) const;
		
		// TODO Funciones de estado
		void avanza(Subconjunto const & s);
		void retrocede(Subconjunto const & s);
		list <Subconjunto> getAlternativas(Subconjunto const & s);
		Subconjunto getMejorAlternativa(Subconjunto const & s);
		bool esFinal();
		
		
};

#endif
