#include <iostream>
using namespace std;
#include <string>
#include <sstream>

class VehiculoElectrico {
	protected:
		int nivel_bateria;
	public:
		VehiculoElectrico();
		VehiculoElectrico & operator+=(const int& carga);
		VehiculoElectrico & operator-=(const int& consumo);
		int getNivelBateria();
		virtual float getAutonomia();
		virtual string toString();
		friend ostream & operator<<(ostream & os, const VehiculoElectrico & v);
};