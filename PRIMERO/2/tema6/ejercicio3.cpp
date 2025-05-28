#include "ejercicio2.h"

Asignatura::Asignatura(string nombre, int cuatrimestre, int curso, float dificultad_esperada) {
	this->nombre = nombre;
	this->cuatrimestre = cuatrimestre;
	this->curso = curso;
	this->dificultad_esperada = dificultad_esperada;
}

void Asignatura::setDificultad(float nuevaDificultad) {
	dificultad_esperada = nuevaDificultad;
}

string Asignatura::toString() {
	return "Nombre: "+nombre+ ", cuatrimestre: " +to_string(cuatrimestre)+ ", curso: " +to_string(curso)+ ", dificultad esperada: " +to_string(dificultad_esperada);	
}