#include "Puntaje.h"

Puntaje::Puntaje(int valor) {
    puntos = valor;
}

Puntaje& Puntaje::operator=(const int& valor) {
	puntos = valor;
	return *this;
}
Puntaje Puntaje::operator+(const Puntaje& otro) {
	return Puntaje(puntos + otro.puntos);
}
Puntaje& Puntaje::operator+=(const Puntaje& otro) {
	puntos += otro.puntos;
	return *this;
}
Puntaje Puntaje::operator-=(const int& otro) {
	puntos -= otro;
	return *this;
}
Puntaje& Puntaje::operator+=(const int& otro) {
	puntos += otro;
	return *this;
}
bool Puntaje::operator>(const Puntaje& otro) {
	return puntos>otro.puntos;
}
bool Puntaje::operator<(const Puntaje& otro) {
	return puntos<otro.puntos;
}

ostream& operator<<(ostream& os, const Puntaje& p) {
	os << "[Puntos Totales: " << p.puntos << "]";
	return os;
}

istream& operator>>(istream& is, Puntaje& p) {
	is >> p.puntos;
	return is;
}

