// declarar una vez esta clase
#include<iostream>
#include<string>
using namespace std;

class Persona {
    protected:
		string nombre;
		
	public:
		Persona();
		Persona(string nombre);
		void setNombre(string nombre);
		virtual string toString();
};