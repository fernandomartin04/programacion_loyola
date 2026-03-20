#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"

class Moto : public Vehiculo {
    private:
        float kilometros;
        float precioKm;
    public:
        Moto();
        Moto(string matricula, int id, float kilometros, float precioKm);
        float calcularCoste();

};

#endif