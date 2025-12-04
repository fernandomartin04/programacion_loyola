#ifndef PROBLEMA_H
#define PROBLEMA_H

#include <vector>
#include "estado.h"
#include "pista.h" 
#include <iostream>
using namespace std;

class Problema {
    public:
        vector<Pista> filasP;
        vector<Pista> columnasP;

        Solucion solucionBase;
        vector<Solucion> soluciones;

        int filas, columnas;

        Problema(int filas, int columnas) {
            this->filas = filas;
            this->columnas = columnas;
            filasP.resize(filas, Pista({}));
            columnasP.resize(columnas, Pista({}));
        }

        Problema() {
            filas = columnas = 0;
            filasP.clear();
            columnasP.clear();
        }

        void ejecutaBacktracking();
        void bt(Estado *e);
        void actualizaMejorSolucion(Estado *e);


        bool validarParcial(const Solucion& s, int fila, int col);
        
        bool esLineaValida(const vector<int>& linea, const vector<int>& pistas, bool esParcial);
};

#endif
