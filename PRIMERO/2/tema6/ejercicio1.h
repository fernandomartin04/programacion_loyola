#include <iostream>
using namespace std;
#include<string>

class Asignatura {
	private:
		string nombre;
		int cuatrimestre;
		float dificultad_esperada;
	public:
		Asignatura(string, int, float);
		virtual string toString();
};