#include<iostream>
#include"corto.h"

using namespace std;

Corto & Corto::operator=(Corto const & c)
{
    setId(c.getId());
    setDuracion(c.getDuracion());
    setNombre(c.getNombre());
    return *this;
}

// TODO a) sobrecarga del operador <
bool Corto::operator < (Corto const & c) const
{

}

void Corto::mostrar() const
{
    cout << "(Corto: " << getId()
         << ", Nombre: " << getNombre()
         << ", Duracion: " << getDuracion()
         << ")" << endl;
}
