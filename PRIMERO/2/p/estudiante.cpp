#include "estudiante.h"
#include <iomanip>
Estudiante::Estudiante(){
	nombre = "";
	edad = 0;
	notaMedia = 0.0;
}
Estudiante::Estudiante(string nombre, int edad, float notaMedia){
	this->nombre = nombre;
	this->edad = edad;
	this->notaMedia = notaMedia;
}
string Estudiante::getNombre(){
	return nombre;
}
int Estudiante::getEdad(){
	return edad;
}
float Estudiante::getNotaMedia(){
	return notaMedia;
}
string Estudiante::toString(){
	return "Nombre: " + nombre + "\nEdad: " + to_string(edad) + "\nNota Media: " + to_string(notaMedia);
}
// Para escritura en archivo
ostream& operator<<(ostream& os, Estudiante& e) {
	os << quoted(e.nombre) << " " << e.edad << " " << fixed << setprecision(2) << e.notaMedia;
	return os;
}

istream& operator>>(istream &is, Estudiante &e){
	is >> quoted(e.nombre) >> e.edad >> e.notaMedia;
	return is;
}