#include "ClienteEmpleado.h"

ClienteEmpleado::ClienteEmpleado() : Cliente() , Empleado() {
}

int ClienteEmpleado::getTotalCuenta() {
	return total_cuenta*(1-descuento);
}

string ClienteEmpleado::toString() {
	return Cliente::toString() + "\n" + Empleado::toString() + "\nDescuento: " + to_string(descuento);
}