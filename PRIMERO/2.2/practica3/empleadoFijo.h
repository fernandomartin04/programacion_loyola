#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H
#include "empleado.h"

class EmpleadoFijo: public Empleado {
    private:
        float sueldoBase;
    public:
        EmpleadoFijo();
        EmpleadoFijo(float sueldoBase);
        float calcularSalario();

};

#endif