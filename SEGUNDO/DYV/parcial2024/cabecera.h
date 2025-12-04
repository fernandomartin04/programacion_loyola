#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
using namespace std;

class Cocinero {
	private:
		string nombre;
		int numero_ingredientes;
	
	public:
		Cocinero (string nombre = "", int numero_ingredientes = 0) {
			this->nombre = nombre;
			this->numero_ingredientes = numero_ingredientes;
		}
		
		string getNombre() {return nombre;}
		int getNumeroIngredientes() {return numero_ingredientes;}
	
		void setNombre(string nombre) {this->nombre=nombre;}
		void setNumeroIngredientes(int numero_ingredientes) {this->numero_ingredientes=numero_ingredientes;}
		
		Cocinero & operator=(Cocinero const & c);
		
		void mostrar();
		
		
};

int validarFilaIngredientes(Cocinero* v, int n);

#endif