#include "Persona.h"

// 0.2
Persona::Persona(){
    this->nombre = "Desconocido";
}

// 0.2
Persona::Persona(string nombre){
    this->nombre = nombre;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona::toString(){
    //0.2
    return "Nombre: " + nombre;
}