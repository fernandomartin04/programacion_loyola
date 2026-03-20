#include "empleadoFijo.h"

EmpleadoFijo::EmpleadoFijo() {
    sueldoBase=0;
}

EmpleadoFijo::EmpleadoFijo(float sueldoBase) : Empleado(nombre, id) {
    this->sueldoBase=sueldoBase;
}

float EmpleadoFijo::calcularSalario() {
    return sueldoBase;
}