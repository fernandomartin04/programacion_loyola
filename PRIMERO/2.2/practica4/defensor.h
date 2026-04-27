#ifndef DEFENSOR_H
#define DEFENSOR_H
#include "jugador.h"

class Defensor : public virtual Jugador {
    protected:
        int balones_recuperados;
    public:
        Defensor();
        Defensor(string nombre, int dorsal, int balones_recuperados);
        float calcularValoracion();
        string toString();
};

#endif