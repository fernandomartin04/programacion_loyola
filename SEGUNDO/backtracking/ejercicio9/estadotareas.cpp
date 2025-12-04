#include<iostream>
#include"estadotareas.h"

using namespace std;

//Funciones de estado
void EstadoTareas::avanza(int id, Tarea const & t)
{
	sol.addTareaInProcesador(id,t);
	setNTareasAsignadas(getNTareasAsignadas()+1);
}

void EstadoTareas::retrocede(int id, Tarea const & t)
{
	sol.deleteTareaInProcesador(id,t);
	setNTareasAsignadas(getNTareasAsignadas()-1);
}

list <int> EstadoTareas::getAlternativas()
{
	list <int> l;
	for(int i=0; i<sol.getNumeroProcesadores();i++)
	{
		l.push_back(i);
	}
	return l;
}

int EstadoTareas::getMejorAlternativa()
{
	list <Procesador> procesadores = sol.getProcesadores();
	list <Procesador>::iterator it = procesadores.begin();
	int id_min=0;
	int min = it->getTiempo();
	it++;
	while(it!=procesadores.end())
	{
		if(it->getTiempo() < min)
		{
			min=it->getTiempo();
			id_min=it->getId();
		}
		it++;
	}
	return id_min;
}

bool EstadoTareas::esFinal()
{
	return (getNTareasAsignadas()==getNTareasTotales());	
}
