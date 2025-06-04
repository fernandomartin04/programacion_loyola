#include "tarjeta.h"

Tarjeta::Tarjeta() {
	id = -1;
	nivel_acceso = -1;
}

Tarjeta::Tarjeta(int id, int nivel_acceso) {
	this->id = id;
	this->nivel_acceso = nivel_acceso;
}

Tarjeta::Tareta(const Tarjeta &otra) {
	id = otra.id;
	nivel_acceso = otra.nivel_acceso;
}