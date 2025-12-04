#include<iostream>
#include"procesador.h"

using namespace std;

//Sobrecarga
Procesador & Procesador::operator=(Procesador const & p)
{
	setId(p.getId());
	setTareas(p.getTareas());
	setTiempo(p.getTiempo());
	return *this;
}

//Funcion de salida
void Procesador::mostrar() const
{
	cout << "Procesador: " << getId() << endl;
	cout << "Tiempo: " << getTiempo() << endl;
	cout << "Tareas: " << endl;
	list <Tarea>::const_iterator it = tareas.begin();
	while(it!=tareas.end())
	{
		it->mostrar();
		it++;
	}
}

//Funciones para insertar o eliminar una tarea de un procesador
void Procesador::addTarea(Tarea const & t)
{
	tareas.push_back(t);
	setTiempo(getTiempo()+t.getDuracion());
}

void Procesador::deleteTarea(Tarea const & t)
{
	tareas.pop_back();
	setTiempo(getTiempo()-t.getDuracion());	
}
