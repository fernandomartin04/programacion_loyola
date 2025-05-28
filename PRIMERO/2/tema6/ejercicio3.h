#include <iostream>
#include <iomanip>

using namespace std;
#include<string>

class Asignatura {
	private:
		string nombre;
		int cuatrimestre, curso;
		float dificultad_esperada;
	public:
		Asignatura(string, int, int, float);
		void setDificultad(float nuevaDificultad);
		virtual string toString();
};