#include "ClienteEmpleado.h"

// Constructor 0 por defecto
ClienteEmpleado::ClienteEmpleado(){
	descuento = 0;
}


int ClienteEmpleado::getTotalCuenta() {
	return total_cuenta*(1-descuento);
}

string ClienteEmpleado::toString() {
	return "El nombre es: "+ nombre;
}