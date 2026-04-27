#ifndef CARRILERO_H
#define CARRILERO_H
#include "atacante.h"
#include "defensor.h"

class Carrilero : public Atacante, public Defensor {
    public:
        Carrilero();
        Carrilero(string nombre, int dorsal, int goles_marcados, int balones_recuperados);
        float calcularValoracion();
        string toString();
};

#endif