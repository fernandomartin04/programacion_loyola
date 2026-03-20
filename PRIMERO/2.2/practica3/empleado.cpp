#include "empleado.h"
string Empleado::nombre_empresa = "";
Empleado::Empleado() {
    nombre = "";
    id = 0;
}

Empleado::Empleado(string nombre, int id) {
    this->nombre=nombre;
    this->id=id;
}

float Empleado::calcularSalario() {
    return 0;
}

Empleado::~Empleado(){
    cout << "Se ha llamado al destructor" << endl;
}