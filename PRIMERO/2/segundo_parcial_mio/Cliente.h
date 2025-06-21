#pragma once
#include "Persona.h"
#include<string>

class Cliente : virtual public Persona{
	protected:
		int total_cuenta;
	public:
		Cliente();
		Cliente(string nombre);
		Cliente& operator+=(const int & cantidad);
		Cliente& operator-=(const int & cantidad);
		virtual int getTotalCuenta();
		virtual string toString();
	
		friend class Empleado;
};