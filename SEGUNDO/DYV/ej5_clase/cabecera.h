#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
using namespace std;

class Persona {
    private:
        string nombre;
        int edad;

    public:
        Persona (string nombre="", int edad=0) {
            this->nombre=nombre;
            this->edad=edad;
        }

        string getNombre() const {return nombre;}
        int getEdad() const {return edad;}

        void setNombre(string nombre) {this->nombre=nombre;}
        void setEdad(int edad) {this->edad=edad;}

        Persona & operator=(const Persona & p) {
            setNombre(p.getNombre());
            setEdad(p.getEdad());
            return *this;
        }

        bool operator<(const Persona & p) const {
            return edad < p.edad;
        }

        bool operator>(const Persona & p) const {
            return edad > p.edad;
        }

        void mostrar() {
            cout<<"Nombre: " << getNombre() << ", " << "edad: " << getEdad();
        }

};

struct par {
    Persona min;
    Persona max;
};
void mostrarPersonas(Persona * v, int n);
par minimoMaximo(Persona* v, int n);

#endif