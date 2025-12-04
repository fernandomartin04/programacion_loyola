#ifndef CABECERA_H
#define CABECERA_H

#include <iostream>
#include <vector>
using namespace std;

class Objeto {
	public:
		int fila, columna;
		
		Objeto (int fila = -1, int columna = -1) {
			this->fila = fila;
			this->columna = columna;
		} 
	
};

class Solucion {
	public:
		vector<Objeto> reinas;
		vector<int> colOcupada;
		vector<int> diag1;
		vector<int> diag2;
		int n;
		
		Solucion (int n) {
			this->n = n;
			this->reinas = vector<Objeto>(n);
			this->colOcupada = vector<int>(n, 0);
			this->diag1 = vector<int>(2*n, 0);
			this->diag2 = vector<int>(2*n, 0)
		}
};

class Estado {
	public:
		Solucion *sol;
		int filaActual;
		
		Estado (Solucion *sol) {
			this->sol = sol;
			this->filaActual = 0;
		}
		
		bool esFinal();
		vector<int> getAlternativas();
		void avanza(int col);
		void retrocede(int col);
};

class Problema {
	public:
		vector<Solucion> soluciones;
		int n;
		
		Problema (int n) {
			this->n = n;
		}
		
		void actualizarMejorSolucion(Estado *e);
		void bt(Estado *e);
		void ejecutaBacktracking();
	
};

#endif