#include <iostream>
#include "empleadoFijo.h"
#include "empleadoPorHoras.h"

using namespace std;

int main() {
    Empleado::nombre_empresa = "MatriculaDeHonor";
    cout << "Nombre de la empresa: " << Empleado::nombre_empresa << endl;

    Empleado* empleados[2];
    
    return 0;
}

