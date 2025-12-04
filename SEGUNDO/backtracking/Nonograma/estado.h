#ifndef ESTADO_H
#define ESTADO_H

#include "solucion.h"

class Estado {
public:
    Solucion* sol;
    int posicion;

    // Constructor por defecto se queda inline
    Estado() {
        sol = nullptr;
        posicion = 0;
    }

    // Este solo se declara, la implementacion esta en estado.cpp
    Estado(Solucion* s);

    void avanza(int valor);
    void retrocede(int valor);
    bool esFinal();
    vector<int> getAlternativas();
};

#endif
