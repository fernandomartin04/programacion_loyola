#include "empleadoFijo.h"

EmpleadoFijo::EmpleadoFijo() {
    sueldoBase=0;
}

EmpleadoFijo::EmpleadoFijo(float sueldoBase) : Empleado(nombre, id) {
    this->sueldoBase=sueldoBase;
}

EmpleadoFijo::float calcularSalario() {
    return sueldoBase;
}