#ifndef CABECERA_H
#define CABECERA_H

#include <iostream>
#include <vector>

using namespace std;

class Objeto {
	public:
		int valor;
		Objeto(int valor=0) {
			this->valor=valor;
		}
};

class Solucion {
	public:
		vector<int> sol;
		int n, k;
		Solucion(int n, int k) {
			this->n = n;
			this->k = k;
			this->sol = vector<int>(k);
		}
	
};

class Estado {
	public:
		Solucion *sol;
		int posicion;
		
		Estado(Solucion *sol) {
			this->sol = sol;
			this->posicion = 0;
		}
		
		bool esFinal();
		vector<int> getAlternativas();
		void avanza(int valor);
		void retrocede();
	
};

class Problema {
	public:
		vector<Solucion> soluciones;
		int n, k;
		
		Problema(int n, int k) {
			this->n = n;
			this->k = k;
		}
		
		void actualizarMejorSolucion(Estado *e);
		void bt(Estado *e);
		void ejecutaBacktracking();
		
	
};

#endif