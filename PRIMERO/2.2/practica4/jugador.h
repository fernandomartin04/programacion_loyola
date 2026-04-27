#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
using namespace std;

class Jugador {
    protected:
        string nombre;
        int dorsal;
        int nro_partidos;
    public:
        Jugador();
        Jugador(string nombre, int dorsal);
        virtual int calcularValoracion();
        virtual string toString();
};

#endif