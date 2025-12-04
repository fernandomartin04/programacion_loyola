#ifndef _PROCESADOR_H_
#define _PROCESADOR_H_

#include<iostream>
#include<list>
#include"tarea.h"

using namespace std;

class Procesador
{
	private:
		int id;
		list <Tarea> tareas;
		int tiempo;
		
	public:
		//Constructor
		Procesador(int i)
		{
			setId(i);
			tareas.clear();
			setTiempo(0);
		}
		
		//Observadores
		int getId() const {return id;}
		list <Tarea> getTareas() const {return tareas;}
		int getTiempo() const {return tiempo;}
		
		//Modificadores
		void setId(int i){id=i;}
		void setTareas(list <Tarea> const & t){tareas=t;}
		void setTiempo(int t){tiempo=t;}
		
		//Sobrecarga
		Procesador & operator=(Procesador const & p);
		
		//Funcion de salida
		void mostrar() const;
		
		//Funciones para insertar o eliminar una tarea de un procesador
		void addTarea(Tarea const & t);
		void deleteTarea(Tarea const & t);

};

#endif
