#ifndef _SUBCONJUNTO_H_
#define _SUBCONJUNTO_H_

#include<iostream>
#include<set>

using namespace std;

class Subconjunto
{
	private:
		set <int> datos;
		float peso;
		int cantidad;
		float pu;
		
	public:
		//Constructor
		Subconjunto(set <int> const & d, float p, int c = 0)
		{
			setDatos(d);
			setPeso(p);
			setCantidad(c);
			setPU(p/d.size());
		}
		
		Subconjunto(Subconjunto const & s)
		{
			*this=s;
		}
		
		//Observadores
		set <int> getDatos() const {return datos;}
		float getPeso() const {return peso;}
		bool getCantidad() const {return cantidad;}
		float getPU() const {return pu;}
		
		//Modificadores
		void setDatos(set <int> const & d){datos=d;}
		void setPeso(float p){peso=p;}
		void setCantidad(int c){cantidad=c;}
		void setPU(float p){pu=p;}
		
		//Sobrecarga
		Subconjunto & operator = (Subconjunto const & s);
		bool operator < (Subconjunto const & s) const;
		
		//Funcion de salida
		void mostrar() const;	
};

#endif
