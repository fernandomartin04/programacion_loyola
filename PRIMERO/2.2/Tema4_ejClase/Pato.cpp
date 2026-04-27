#include "Pato.h"
Pato::Pato() : AnimalTerrestre(), AnimalAcuatico(){
}

// Si no hay problemas de ambiguedad, se puede usar la clase base, o acceder a los metodos de la clase base con el nombre de la clase
// Pato::Pato() : Animal(){
// }

// Pato::Pato(string nombre, string especie, string raza, string color_de_pico) : AnimalTerrestre(nombre, especie), AnimalAcuatico(nombre, especie){
Pato::Pato(string nombre, string especie, string raza, string color_de_pico) : Animal(nombre, especie){
	this->raza = raza;
	this->color_de_pico = color_de_pico;
	cout << "Ha ocurrido una construcción por copia" << endl;
}
	

Pato::Pato(const Pato& otro) : Animal(otro.nombre, otro.especie){
	this->raza = otro.raza;
	this->color_de_pico = "Desconocido";
}

Pato Pato::operator=(const Pato& otro) {
	// Como no hay metodos parecidos en las clases base, habrá que asignar los atributos de las clases base
	this->nombre = otro.nombre;
	this->especie = otro.especie;
	this->raza = "Raza Desconocida";
	this->color_de_pico = "Color de Pico Desconocido";

	cout << "Ha ocurrido una asignación por copia" << endl;
	return *this;
}

string Pato::comer(string comida) {
	return "El pato come " + comida;
}

string Pato::toString() {

	string salida = "Clase Pato (con virtualizacion de clases):\nNombre: " + nombre + ". Especie: " + especie + ". Raza: " + raza + ". Color de pico: " + color_de_pico;

	// string salida = "Clase Pato (con resolucion de ambito):\nNombre: " + AnimalAcuatico::nombre + ". Especie: " + AnimalTerrestre::especie + ". Raza: " + raza + ". Color de pico: " + color_de_pico;
	return salida;
}

string Pato::hacerCosasDePato() {
	return "El pato hace cosas de pato";
}

