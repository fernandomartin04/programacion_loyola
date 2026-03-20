#include <iostream>
#include "empleadoFijo.h"
#include "empleadoPorHoras.h"

using namespace std;

int main() {
    Empleado::nombre_empresa = "MatriculaDeHonor";
    cout << "Nombre de la empresa: " << Empleado::nombre_empresa << endl;

    Empleado* empleados[2];
    empleados[0] = new EmpleadoFijo(2500);
    empleados[1] = new EmpleadoPorHoras(150,12);

    cout << "Salario empleado " << 1 << ": "
    << empleados[0]->calcularSalario() << endl;

    cout << "Salario empleado " << 2 << ": "
    << empleados[1]->calcularSalario() << endl;

    delete empleados[0];
    delete empleados[1];

    return 0;
}

