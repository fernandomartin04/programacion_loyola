#include <iostream>
#include <string>
using namespace std;

class Estudiante {
	private:
		string nombre;
		int edad;
		float notaMedia;
	public:
		Estudiante();
		Estudiante(string, int, float);
		string getNombre();
		int getEdad();
		float getNotaMedia();
		virtual string toString();
		friend istream& operator>>(istream &is, Estudiante &e);
		friend ostream& operator<<(ostream &os, Estudiante &e);
};
