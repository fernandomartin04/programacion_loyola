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
		Robot(string nombre="", int carga_bateria=0) {
			this->nombre = nombre;
			this->carga_bateria = carga_bateria;
		}

		string getNombre() const {
			return nombre;
		}
		int getCargaBateria() const {
			return carga_bateria;
		}

		void setNombre(string nombre) {
			this->nombre = nombre;
		}

		void setCargaBateria(int carga_bateria) {
			this->carga_bateria = carga_bateria;
		}
		
		//Sobrecarga del operador =
		Robot & operator=(const Robot & r);

		//Funcion de salida
		void show();
};
//TODO b) Funcion dobleCargaBateria
int dobleCargaBateria(Robot *v, int i, int n);


#endif
