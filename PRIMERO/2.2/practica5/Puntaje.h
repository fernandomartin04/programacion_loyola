#pragma once
#include <iostream>
using namespace std;

class Escala; // forward declaration

class Puntaje {
private:
    int puntos;

public:
    Puntaje(int valor = 0);

    // operadores
    Puntaje& operator=(const int& valor);
    Puntaje operator+(const Puntaje& otro);
    Puntaje& operator+=(const Puntaje& otro);
    Puntaje operator-=(const int& valor);
    Puntaje& operator+=(const int& valor);
    bool operator>(const Puntaje& otro);
    bool operator<(const Puntaje& otro);

    // friend function
    friend bool esEmpate(Puntaje p1, Puntaje p2);

    // clase amiga
    friend class Escala;

    // operadores de flujo
    friend ostream& operator<<(ostream& os, const Puntaje& p);
    friend istream& operator>>(istream& is, Puntaje& p);
};