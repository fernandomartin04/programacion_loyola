#pragma once 
#include <iostream>
using namespace std;
#include <string>
#include <sstream>


class VehiculoHibrido;

class VehiculoCombustion{
	protected:
		int nivel_tanque;
	public:
		VehiculoCombustion();
		VehiculoCombustion(int nivel_tanque);
		VehiculoCombustion operator+(const int & carga);
		VehiculoCombustion operator-(const int & consumo);
		int getNivelTanque();
		virtual float getAutonomia();
		virtual string toString();
		friend ostream & operator<<(ostream & os, const VehiculoCombustion & v);

		
		friend class VehiculoHibrido;
};