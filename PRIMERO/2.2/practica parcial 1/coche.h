#ifndef COCHE_H
#define COCHE_H
#include "vehiculo.h"


class Coche : public Vehiculo {
    private:
        float costeFijo;
    public:
        Coche();
        Coche(string matricula, int id, float costeFijo);
        
        float calcularCoste();
};

#endif