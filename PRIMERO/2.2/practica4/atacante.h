#ifndef ATACANTE_H
#define ATACANTE_H
#include "jugador.h"

class Atacante : public Jugador {
    private:
        int goles_marcados;
    public:
        Atacante();
        Atacante(string nombre, int dorsal, int goles_marcados);
        int calcularValoracion();
        string toString();
};

#endif
