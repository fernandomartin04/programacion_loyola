#ifndef ATACANTE_H
#define ATACANTE_H
#include "jugador.h"

class Atacante : public virtual Jugador {
    protected:
        int goles_marcados;
    public:
        Atacante();
        Atacante(string nombre, int dorsal, int goles_marcados);
        float calcularValoracion();
        string toString();
};

#endif
