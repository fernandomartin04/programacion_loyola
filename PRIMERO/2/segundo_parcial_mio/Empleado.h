#pragma once
#include "Persona.h"
#include "Cliente.h"
#include<string>

class Empleado : virtual public Persona {
	protected:
		int sueldo;
		string nombre_empresa;
	public:
		Empleado();
		Empleado(string nombre, int sueldo);
		Empleado & operator=(const Empleado & otro);
		bool cobrarACliente(Cliente& c);
		virtual string toString();

}