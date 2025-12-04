#include<iostream>
#include"soluciontareas.h"

using namespace std;

//Sobrecarga
SolucionTareas & SolucionTareas::operator = (SolucionTareas const & s)
{
	procesadores.clear();
	setProcesadores(s.getProcesadores());
	setTiempoTotal(s.getTiempoTotal());
	setNumeroProcesadores(s.getNumeroProcesadores());
}

bool SolucionTareas::operator > (SolucionTareas const & s)const
{
	return getTiempoTotal() < s.getTiempoTotal();
}

//Funcion de salida
void SolucionTareas::mostrar() const
{
	cout <<endl << "Tiempo total: " << getTiempoTotal() << endl;
	cout << "Numero de procesadores: " << getNumeroProcesadores() << endl;
	list <Procesador>::const_iterator it = procesadores.begin();
	while(it!=procesadores.end())
	{
		it->mostrar();
		it++;
	}
}

//Funcion auxiliar que calcula el maximo tiempo de todos los procesadores
//Sera el tiempo total de nuestra solucion
//Util para cuando se inserte o elimine tareas en los procesadores
void SolucionTareas::actualizarTiempoTotal()
{
	int tiempoMaximo = 0;
	list <Procesador>::const_iterator it = procesadores.begin();
	while(it!=procesadores.end())
	{
		if(it->getTiempo() > tiempoMaximo)
		{
			tiempoMaximo = it->getTiempo();
		}
		it++;
	}
	setTiempoTotal(tiempoMaximo);
}

//Funciones para insertar o eliminar una tarea en un procesador concreto
void SolucionTareas::addTareaInProcesador(int id, Tarea const & t)
{
	getProcesador(id).addTarea(t);
	actualizarTiempoTotal();	
}

void SolucionTareas::deleteTareaInProcesador(int id, Tarea const & t)
{
	getProcesador(id).deleteTarea(t);
	actualizarTiempoTotal();
}
