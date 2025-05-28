#include "ejercicio1.h"

Asignatura::Asignatura(string nombre, int cuatrimestre, float dificultad_esperada) {
	this->nombre = nombre;
	this->cuatrimestre = cuatrimestre;
	this->dificultad_esperada = dificultad_esperada;
}

string Asignatura::toString() {
	return "Nombre: "+nombre+ ", cuatrimestre: " +to_string(cuatrimestre)+ ", dificultad esperada: "+to_string(dificultad_esperada);	
}