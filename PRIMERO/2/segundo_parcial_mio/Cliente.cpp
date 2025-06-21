#include "Cliente.h"

Cliente::Cliente : Persona() {
	this->total_cuenta = 0;
}

Cliente::Cliente : Persona(nombre) {
	this->total_cuenta = 0;
}

Cliente& Cliente::operator+=(const int & cantidad) {
	total_cuenta += cantidad;
	return *this;
}

Cliente& Cliente::operator+=(const int & cantidad){
    total_cuenta += cantidad;
    return *this;
}

int Cliente::getTotalCuenta() {
	return total_cuenta;
} 

string Cliente::toString() {
	return "Nombre: " + nombre + " Cuenta: " + to_string(total_cuenta);
}