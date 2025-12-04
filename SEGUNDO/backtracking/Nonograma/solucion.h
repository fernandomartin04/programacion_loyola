#ifndef SOLUCION_H
#define SOLUCION_H

#include <vector>
#include "objeto.h"
#include <iostream>
using namespace std;

class Solucion {
    public:
        vector<vector<Objeto>> tablero;
        int filas, columnas;

        Solucion() {
            filas = columnas = 0;
        }

        Solucion(int f, int c) {
            this->filas = f;
            this->columnas = c;
            tablero.resize(filas, vector<Objeto>(columnas, Objeto(0)));
        }

        void imprimir() {
            cout << "\n";
            for (int i = 0; i < filas; i++) {
                for (int j = 0; j < columnas; j++) {
                    if (tablero[i][j].valor == 1) {
                        cout << " # "; 
                    } else {
                        cout << " . "; 
                    }
                }
                cout << "\n";
            }
            cout << "\n";
        }
};

#endif
