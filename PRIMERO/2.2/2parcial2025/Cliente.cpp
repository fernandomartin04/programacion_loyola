#include "Cliente.h"

Cliente::Cliente() : Persona(){
    total_cuenta = 0;
}

Cliente::Cliente(string nombre) : Persona(nombre) {}

Cliente & Cliente::operator+=(const int & cantidad) {
    this->total_cuenta += cantidad;
    return *this;
}

Cliente & Cliente::operator-=(const int & cantidad) {
    this->total_cuenta -= cantidad;
    return *this;
}   

string Cliente::toString() {
    return "Nombre: " + nombre + " Total cuenta: " + to_string(total_cuenta);
}

