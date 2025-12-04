#ifndef PROBLEMA_H
#define PROBLEMA_H

#include <vector>
#include "estado.h"
#include "pista.h" 
#include <iostream>
#include <iomanip> // Necesario para setw
using namespace std;

class Problema {
    public:
        vector<Pista> filasP;
        vector<Pista> columnasP;
        Solucion solucionBase;
        vector<Solucion> soluciones;
        vector<vector<int>> tableroInicial;
        int filas, columnas;
        
        Problema(int filas, int columnas) {
            this->filas = filas;
            this->columnas = columnas;
            filasP.resize(filas, Pista({}));
            columnasP.resize(columnas, Pista({}));
            
            //inicializamos tablero inicial a que todo este indefinido.
            for(int i=0; i<filas;i++){
				for(int j=0; j<columnas; j++){
						tableroInicial[i][j]=-1;
				}
			}
        }

		Problema() {
            filas = columnas = 0;
            filasP.clear();
            columnasP.clear();
            tableroInicial.clear();
        }

        void ejecutaBacktracking();
        void bt(Estado *e);
        void actualizaMejorSolucion(Estado *e);
        
        // Muestra tablero parcial y pistas antes de resolver
        void mostrarInfoInicial();

        bool validarParcial(const Solucion& s, int fila, int col);
        
        bool esLineaValida(const vector<int>& linea, const vector<int>& pistas, bool esParcial);
};

#endif
