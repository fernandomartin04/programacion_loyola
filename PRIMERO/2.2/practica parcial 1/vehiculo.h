#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
    protected:
        string matricula;
        int id;
    public:
        static string nombre_empresa;
        Vehiculo();
        Vehiculo(string matricula, int id);

        virtual float calcularCoste();

        virtual ~Vehiculo();


};

#endif