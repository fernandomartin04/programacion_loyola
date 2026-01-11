#ifndef _PROBLEMA_H_
#define _PROBLEMA_H_

#include<iostream>
#include"estado.h"

using namespace std;

class Problema
{
	private:
		list <Zona> zonas_disponibles;
		int n;
		Solucion mejorSol;
		
	public:
		//Constructor
		Problema(int ** c, string * nombre, int n)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					zonas_disponibles.push_back(Zona(nombre[i],i,0,Sensor(j,c[i][j])));
				}
			}
			zonas_disponibles.sort();
			setN(n);
		}
		
		//Observadores
		list <Zona> getZonasDisponibles() const {return zonas_disponibles;}
		int getN() const {return n;}
		Solucion getMejorSolucion() const {return mejorSol;}
		
		//Modificadores
		void setZonasDisponibles(list <Zona> const & l){zonas_disponibles=l;}
		void setN(int nn){n=nn;}
		void setMejorSolucion(Solucion const & s){mejorSol=s;}
		
		//TODO Funciones de los algoritmos
		Solucion ejecutaBacktracking();
		void bt(Estado & e);
		void actualizaMejorSolucion(Estado & e);
};

#endif
