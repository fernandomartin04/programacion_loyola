#include <iostream>
using namespace std;

class Fraccion {
	private:
		int numerador, denominador;
	public:
		Fraccion();
		Fraccion(int num, int den);
		int getNumerador();
		int getDenominador();
		void setNumerador(int);
		void setDenominador(int);
		void simplificar();
		
		Fraccion operator+(const Fraccion& otra);
		friend ostream& operator<<(ostream& os, const Fraccion& f);
};
