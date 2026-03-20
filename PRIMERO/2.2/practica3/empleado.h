#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;


class Empleado {
    protected:
        string nombre;
        int id;

    public:
        static string nombre_empresa;

        
        Empleado();    
        Empleado(string nombre, int id);

    
        virtual float calcularSalario();
        virtual ~Empleado();
};

#endif