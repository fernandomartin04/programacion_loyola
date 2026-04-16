#pragma once
#include <iostream>
using namespace std;
class Puntaje {
private:
    int puntos;

public:
    Puntaje(int valor);
	
	Puntaje& operator=(const int& valor);
	Puntaje operator+(const Puntaje& otro);
	Puntaje& operator+=(const Puntaje& otro);
	Puntaje operator-=(const int& otro);
	Puntaje& operator+=(const int& otro);
	bool operator>(const Puntaje& otro);
	bool operator<(const Puntaje& otro);
	
	friend bool esEmpate(Puntaje p1, Puntaje p2);
	friend class Escala;
	
	friend ostream& operator<<(ostream& os, const Puntaje& p);
	friend istream& operator>>(istream& is, Puntaje& p);
};