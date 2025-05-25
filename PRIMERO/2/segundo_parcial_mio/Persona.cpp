#include "Persona.h"

// costructores..
// Constructor vacio
Persona::Persona() {
	nombre = "Desconocido";
}
// Constructor principal
Persona::Persona(string _nombre) {
	nombre = _nombre;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona::toString(){
	
    return nombre;
}

// Correcto funcionamiento probado de Persona.cpp y .h