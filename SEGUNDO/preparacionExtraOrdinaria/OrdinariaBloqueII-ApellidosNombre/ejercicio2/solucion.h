#ifndef _SOLUCION_H_
#define _SOLUCION_H_

#include<iostream>
#include<list>
#include<set>
#include"zona.h"

using namespace std;

class Solucion
{
	private:
		list <Zona> zonas;
		set <int> zonas_usadas;
		set <int> sensores_asignados;
		int precision_total;
		
	public:
		//Constructor
		Solucion()
		{
			setPrecisionTotal(0);
		}
		
		Solucion(Solucion const & s)
		{
			*this = s;
		}
		
		//Destructor
		~Solucion()
		{
			zonas.clear();
			zonas_usadas.clear();
			sensores_asignados.clear();
			setPrecisionTotal(0);
		}
		
		//Observadores
		list <Zona> getZonas() const {return zonas;}
		set <int> getZonasUsadas() const {return zonas_usadas;}
		set <int> getSensoresAsignados() const {return sensores_asignados;}
		int getPrecisionTotal() const {return precision_total;}
		
		//Modificadores
		void setZonas(list <Zona> const & l){zonas=l;}
		void setZonasUsadas(set <int> const & s){zonas_usadas=s;}
		void setSensoresAsignados(set <int> const & s){sensores_asignados=s;}
		void setPrecisionTotal(int p){precision_total=p;}
		
		//Sobrecarga
		Solucion & operator = (Solucion const & s);
		
		//TODO Operador >
		bool operator > (Solucion const & s) const;
		
		//Funcion de salida
		void mostrar() const;
		
		//TODO Funciones para insertar y eliminar
		void addZona(Zona const & z);
		void deleteZona(Zona const & z);
		
};

#endif
