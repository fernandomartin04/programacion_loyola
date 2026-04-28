#pragma once
#include "VehiculoElectrico.h"
#include "VehiculoCombustion.h"

class VehiculoHibrido : public VehiculoCombustion, public VehiculoElectrico{
	protected:
		float factor_ev;
	public:
		VehiculoHibrido();
		VehiculoHibrido & operator=(const VehiculoCombustion & v_c);
		float getAutonomia();
		string toString();
		friend ostream & operator<<(ostream & os, const VehiculoHibrido & v);

};