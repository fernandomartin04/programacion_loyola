#include "Puntaje.h"

// constructor
Puntaje::Puntaje(int valor) {
    puntos = valor;
}

// operator =
Puntaje& Puntaje::operator=(const int& valor) {
    puntos = valor;
    return *this;
}

// operator +
Puntaje Puntaje::operator+(const Puntaje& otro) {
    return Puntaje(puntos + otro.puntos);
}

// operator += (Puntaje)
Puntaje& Puntaje::operator+=(const Puntaje& otro) {
    puntos += otro.puntos;
    return *this;
}

// operator += (int)
Puntaje& Puntaje::operator+=(const int& valor) {
    puntos += valor;
    return *this;
}

// operator -=
Puntaje Puntaje::operator-=(const int& valor) {
    puntos -= valor;
    return *this;
}

// comparadores
bool Puntaje::operator>(const Puntaje& otro) {
    return puntos > otro.puntos;
}

bool Puntaje::operator<(const Puntaje& otro) {
    return puntos < otro.puntos;
}

// función friend
bool esEmpate(Puntaje p1, Puntaje p2) {
    return p1.puntos == p2.puntos;
}

// operador <<
ostream& operator<<(ostream& os, const Puntaje& p) {
    os << "[Puntos Totales: " << p.puntos << "]";
    return os;
}

// operador >>
istream& operator>>(istream& is, Puntaje& p) {
    is >> p.puntos;
    return is;
}