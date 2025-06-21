#include "Persona.h"

Persona::Persona() {
	this->nombre = "Desconocido";
}

Persona::Persona(string nombre) {
	this->nombre = nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::toString(){
	return "Nombre: " + nombre;
}