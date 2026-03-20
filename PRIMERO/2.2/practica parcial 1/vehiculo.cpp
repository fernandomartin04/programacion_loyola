#include "vehiculo.h"
Vehiculo::Vehiculo() {
    matricula = "";
    id = 0;
}
Vehiculo::Vehiculo(string matricula, int id) {
    this->matricula=matricula;
    this->id=id;
}
string Vehiculo::nombre_empresa = "";


float Vehiculo::calcularCoste() {
    return 0;
}

Vehiculo::~Vehiculo() {
    cout << "Destructor implementado" << endl;
}