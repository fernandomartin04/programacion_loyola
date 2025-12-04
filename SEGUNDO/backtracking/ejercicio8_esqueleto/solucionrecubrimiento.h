#ifndef _SOLUCIONRECUBRIMIENTO_H_
#define _SOLUCIONRECUBRIMIENTO_H_

#include<iostream>
#include<list>
#include"subconjunto.h"

using namespace std;

class SolucionRecubrimiento
{
	private:
		list <Subconjunto> subconjuntos;
		set <int> universo_generado;
		list <set <int> > nuevos_elementos;
		float pesoTotal;
	
	public:
		//Constructor
		SolucionRecubrimiento()
		{
			setPesoTotal(0);
		}
		
		SolucionRecubrimiento(SolucionRecubrimiento const & s)
		{
			*this=s;
		}
		
		//Observadores
		list <Subconjunto> getSubconjuntos() const {return subconjuntos;}
		set <int> getUniversoGenerado() const {return universo_generado;}
		list <set <int> > getNuevosElementos() const {return nuevos_elementos;}
		float getPesoTotal() const {return pesoTotal;}
		
		//Modificadores
		void setSubconjuntos(list <Subconjunto> const & s){subconjuntos=s;}
		void setUniversoGenerado(set <int> const & u){universo_generado=u;}
		void setNuevosElementos(list <set <int> > const & l){nuevos_elementos = l;}
		void setPesoTotal(float p){pesoTotal=p;}
		
		//Sobrecarga
		SolucionRecubrimiento & operator=(SolucionRecubrimiento const & s);
		bool operator > (SolucionRecubrimiento const & s) const;
		
		//Funcion de salida
		void mostrar() const;
		
		// TODO Funciones para insertar y eliminar un subconjunto de la solucion
		void addSubconjunto(Subconjunto const & sub);
		void deleteSubconjunto(Subconjunto const & sub);
		
};

#endif
