#ifndef ESTADO_H
#define ESTADO_H

#include "solucion.h"
#include <vector>

class Problema; //declaracion adelantada

class Estado {
public:
    Solucion* sol;
    Problema* prob;
    int posicion;

    Estado() {
        sol = nullptr;
        prob = nullptr;
        posicion = 0;
    }
    
    Estado(Solucion* s, Problema* p);

    void avanza(int valor);
    void retrocede(int valor);
    bool esFinal();
    vector<int> getAlternativas();
};

#endif
