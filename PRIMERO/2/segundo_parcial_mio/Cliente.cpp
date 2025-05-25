#include "Cliente.h"

// Constructor 0 por defecto
Cliente::Cliente() {
	total_cuenta = 0;
}
// Constructor principal
Cliente::Cliente(string _nombre) : Persona(_nombre) {
	nombre = _nombre;
}

int Cliente::getTotalCuenta() {
	return total_cuenta;
}
Cliente& operator+=(cantidad: const int&){
	this->total_cuenta += cantidad&;
}
Cliente& operator-=(cantidad: const int&){
	this->total_cuenta -= cantidad&;
}

string Cliente::toString() {
	return "El nombre es: "+ nombre;
}