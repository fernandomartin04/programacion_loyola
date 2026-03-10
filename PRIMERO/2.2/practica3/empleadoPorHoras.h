#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H
#include "empleado.h"

class EmpleadoPorHoras: public Empleado {
    private:
        float horasTrabajadas;
        float tarifaPorHora;
    public:
        EmpleadoPorHoras();
        EmpleadoPorHoras(float horasTrabajadas, float tarifaPorHora);
        float calcularSalario();
};

#endif