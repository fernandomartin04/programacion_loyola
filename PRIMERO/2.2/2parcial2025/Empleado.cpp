#include "Empleado.h"


Empleado::Empleado() : Persona(){
    sueldo = 1200;
}
Empleado:Empleado(string nombre, int sueldo) : Persona(nombre){
    this->sueldo=sueldo;
}

Empleado & Empleado::operator=(const Empleado & otro){
    this->sueldo = otro.sueldo;
    return *this;
}

bool Empleado::cobrarACliente(Cliente & c) {
    if(total_cuenta > 0) {
        cout << nombre << "cobra al cliente " <<c.nombre << " un total de " << c.total_cuenta << "euros" << endl;
        c.total_cuenta = 0;
        return false;
    }
    else {
        cout << "La cuenta del cliente " << c.nombre << "es nula o invalida" << endl;
        return true;
    }
}

string Empleado::toString() {
    return "Nombre: " + nombre + " Sueldo: " + to_string(sueldo) + " Nombre Empresa: " + nombre_empresa;
}


