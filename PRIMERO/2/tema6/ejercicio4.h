#include <iostream>
#include <iomanip>
#include<string>
using namespace std;


class Asignatura {
	private:
		string nombre;
		int cuatrimestre, curso;
		float dificultad_esperada;
	public:
		Asignatura(string, int, int, float);
		virtual string toString();
		float getDificultad();
};