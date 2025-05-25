#include "magia.h"

SerVivo::SerVivo(string _nombre) {
	nombre = _nombre;
}

Volador::Volador(string _nombre) : SerVivo(_nombre) {}

Invisible::Invisible(string _nombre) : SerVivo(_nombre){}

Hada::Hada(string _nombre) : SerVivo(_nombre) , Volador(_nombre) , Invisible(_nombre){}


void SerVivo :: miNombre() {
	cout << "Hola mi nombre es: " << nombre << endl;
}

void Volador :: volar() {
	cout << "Mira, estoy volando!!! " << endl;
}

void Invisible :: invisibilizarse() {
	cout << "Ahora no puedes verme porque soy invisible!!" << endl;
}

void Hada :: presentarse() {
	miNombre();
	volar();
	invisibilizarse();
	cout << "Aqui estoy, presente" << endl;
}
