#include <list>
#include <iostream>
using namespace std;

class Vuelo {
	private:
		string nombre;
		int asientos;
		double precio;
	public:
		Vuelo(string nombre = "", int asientos = 0, double precio = 0.0) {
			this->nombre=nombre;
			this->asientos=asientos;
			this->precio=precio;
		}
		
		string getNombre() const { return nombre; }
		int getAsientos() const { return asientos; }
		double getPrecio() const { return precio; }
};

Vuelo funcionNoFinal(Vuelo *v, int n);
Vuelo funcionFinal(Vuelo *v, int n);
Vuelo funcionIterativa(Vuelo *v, int n);