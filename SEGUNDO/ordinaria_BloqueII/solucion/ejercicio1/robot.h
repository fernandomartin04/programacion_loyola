#ifndef _ROBOT_H_
#define _ROBOT_H_

#include<iostream>

using namespace std;

class Robot
{
	private:
		string nombre;
		int carga_bateria;
		
	public:
		//TODO a) Completa el constructor y todas las funciones de clase
		//Constructor
		Robot(string n="", int c=0)
		{
			setNombre(n);
			setCargaBateria(c);
		}
		
		//Observadores
		string getNombre() const { return nombre;}
		int getCargaBateria() const {return carga_bateria;}
		
		//Modificadores
		void setNombre(string n){nombre=n;}
		void setCargaBateria(int c){carga_bateria=c;}
		
		//Sobrecarga del operador =
		Robot & operator = (Robot const & r);
		
		//Funcion de salida
		void show() const;
};

//TODO b) Funcion dobleCargaBateria
int dobleCargaBateria(Robot *v, int i, int n);

#endif
