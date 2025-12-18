#ifndef _SOLUCIONREINA_H_
#define _SOLUCIONREINA_H_

#include<iostream>
#include"reina.h"
#include<list>
#include<set>

using namespace std;

class SolucionReina
{
	private:
		list <Reina> reinas;
		set <int> dp_usadas;
		set <int> ds_usadas;
		set <int> c_usadas;
		
	public:
		//Constructores
		SolucionReina(){}
		SolucionReina(SolucionReina const & sol)
		{
			*this=sol;
		}
		
		//Destructor
		~SolucionReina()
		{
			reinas.clear();
			dp_usadas.clear();
			ds_usadas.clear();
			c_usadas.clear();
		}
		
		//Observadores
		list <Reina> getReinas() const {return reinas;}
		set <int> getDPUsadas() const {return dp_usadas;}
		set <int> getDSUsadas() const {return ds_usadas;}
		set <int> getCUsadas() const {return c_usadas;}
		
		//Modificadores
		void setReinas(list <Reina> const & r) { reinas=r;}
		void setDPUsadas(set <int> const dp){dp_usadas=dp;}
		void setDSUsadas(set <int> const ds){ds_usadas=ds;}
		void setCUsadas(set <int> const c){c_usadas=c;}
		
		//Sobrecarga
		SolucionReina & operator = (SolucionReina const & sol);
		
		//Funciones de salida
		void mostrarParcial() const;
		void mostrar() const;
		
		// TODO Funciones de insercion y eliminado de reinas
		void addReina(Reina const & r);
		void deleteReina(Reina const & r);

		
};

#endif
