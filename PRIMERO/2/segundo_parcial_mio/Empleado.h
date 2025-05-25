#include "Persona.h"
class Empleado : virtual public Empleado{
	protected: 
		int sueldo;
		string nombre_empresa;
	public:
		Empleado();
		Empleado(string, int, string);
		Empleado& operator=(const Empleado otro&);
		string toString();
};

