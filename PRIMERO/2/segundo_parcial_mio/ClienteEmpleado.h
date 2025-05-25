#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"

class Empleado : public Persona, Cliente, Empleado{
	private: 
		float descuento;
	public:
		ClienteEmpleado();
		int getTotalCuenta();
		string toString();
};

