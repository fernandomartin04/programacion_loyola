#ifndef _TAREA_H_
#define _TAREA_H_

#include<iostream>

using namespace std;

class Tarea
{
	private:
		int id;
		int duracion;
		
	public:
		//Constructor
		Tarea(int i=-1, int d=-1)
		{
			setId(i);
			setDuracion(d);
		}
		
		Tarea(Tarea const & t)
		{
			*this=t;
		}
		
		//Observadores
		int getId() const {return id;}
		int getDuracion() const {return duracion;}
		
		//Modificadores
		void setId(int i){id=i;}
		void setDuracion(int d){duracion=d;}
		
		//Sobrecarga
		Tarea & operator=(Tarea const & t);
		bool operator < (Tarea const & t) const;
		
		//Funcion de salida
		void mostrar() const;
		
};
#endif
