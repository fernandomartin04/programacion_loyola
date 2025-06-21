#pragma once
#include "Cliente.h"
#include <string>

class ClienteEmpleado : public Cliente , public Empleado {
	private:
		static float descuento; // Static para que no cambie
	public:
		ClienteEmpleado();
		int getTotalCuenta();
		virtual string toString();
}
