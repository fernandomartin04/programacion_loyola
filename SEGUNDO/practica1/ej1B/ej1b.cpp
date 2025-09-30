#include <iostream>
#include <cmath>
#include "cabecera.h"
using namespace std;

double Complejo::getModulo() {
	return sqrt(pow(real,2) + pow(imaginario,2));
};

Complejo Complejo::operator+(const Complejo& c) const{
	double r=real + c.real;
	double i=imaginario + c.imaginario;
	return Complejo(r,i);
};

Complejo Complejo::operator-(const Complejo& c) const{
	double r=real - c.real;
	double i=imaginario - c.imaginario;
	return Complejo(r,i);
};

Complejo Complejo::operator*(const Complejo& c) const{
	double r=(real*c.real) - (imaginario * c.imaginario);
	double i=(real * c.imaginario) + (imaginario * c.real);
	return Complejo(r,i);
};

bool Complejo::operator==(const Complejo& c) const{
	if (real==c.real & imaginario==c.imaginario) {
		return true;
	} else {
		return false;
	}
};

	ostream& operator<<(ostream& os, const Complejo& c){
		return os << c.real << " + " << c.imaginario << "i";
	}


