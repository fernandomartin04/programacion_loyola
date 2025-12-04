#include<iostream>
#include"tarea.h"

using namespace std;

//Sobrecarga
Tarea & Tarea::operator=(Tarea const & t)
{
	setId(t.getId());
	setDuracion(t.getDuracion());
	return *this;
}

bool Tarea::operator < (Tarea const & t) const
{
	return getDuracion() > t.getDuracion();
}


//Funcion de salida
void Tarea::mostrar() const
{
	cout << "(Tarea: " << getId() << ", Duracion: " << getDuracion() << ")" << endl;
}
