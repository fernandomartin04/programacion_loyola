// declarar una vez esta clase
#include<iostream>
using namespace std;
#include <string>

class Persona{
    // 0.1
    protected:
    // creo qu necesito mirar el diagrama otra vez
        string nombre;
    public:
        Persona();
        Persona(string nombre);
        void setNombre(string nombre);
        virtual string toString();
        
};