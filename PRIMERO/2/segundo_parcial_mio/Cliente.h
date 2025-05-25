#include "Persona.h"
class Cliente : virtual public Persona{
	protected: 
		int total_cuenta;
	public:
		Cliente();
		Cliente(string, int);
		Cliente& operator+=(cantidad: const int&);
		Cliente& operator-=(cantidad: const int&);
		int getTotalCuenta(); // no se si esto iba aquí
		string toString();
};

