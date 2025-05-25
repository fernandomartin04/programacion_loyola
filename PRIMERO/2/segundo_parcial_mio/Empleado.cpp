#include "Empleado.h"

// Constructor 0 por defecto
Empleado::Empleado() {
	sueldo = 12000;
	nombre_empresa = "Ayesa";
}
// Constructor principal
Empleado::Empleado(string _nombre, int _sueldo) : Persona(_nombre) {
	nombre = _nombre;
	sueldo = _sueldo;
}
	Empleado& operator=(const Empleado otro&) {
		this->sueldo = otro&;
	}


string Empleado::toString() {
	return "El nombre es: "+ nombre + ", el nombre de la empresa es: " +nombre_empresa; ;
}