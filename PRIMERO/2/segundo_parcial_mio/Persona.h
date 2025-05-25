// declarar una vez esta clase
#include<iostream>

using namespace std;

class Persona{
    // 0.1
    protected:
    // creo qu necesito mirar el diagrama otra vez
        string nombre;
    public:
		Persona();
		Persona(string);
        void setNombre(string nombre);
    // agregar modificadores si es necesario
		string toString();
    
};