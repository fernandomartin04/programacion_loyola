#include "Persona.h"


Persona::Persona() {
    nombre = "Desconocido";
}

Persona::Persona(string nombre) {
    this->nombre=nombre;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona::toString(){
    return nombre;
}