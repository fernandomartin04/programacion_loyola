#ifndef _SOLUCIONTAREAS_H_
#define _SOLUCIONTAREAS_H_

#include<iostream>
#include"procesador.h"

using namespace std;

class SolucionTareas
{
	private:
		list <Procesador> procesadores;
		int tiempo_total;
		int numero_procesadores;
		
	public:
		//Constructor
		SolucionTareas(int n=0)
		{
			for(int i=0; i<n; i++)
			{
				procesadores.push_back(Procesador(i));
			}
			setTiempoTotal(0);
			setNumeroProcesadores(n);
		}
		
		SolucionTareas(SolucionTareas const & s)
		{
			*this=s;
		}
		
		//Observadores
		list <Procesador> getProcesadores() const {return procesadores;}
		int getTiempoTotal() const {return tiempo_total;}
		int getNumeroProcesadores() const {return numero_procesadores;}
		//Os doy la funcion siguiente para poder acceder al procesador i
		// y que pueda ser modificado ya que devuelvo una referencia
		// Hay que asegurarse de que no vamos a introducir un id > numero_procesadores
		Procesador & getProcesador(int id)
		{
			list <Procesador>::iterator it=procesadores.begin();
			while(it!=procesadores.end())
			{
				if(it->getId()==id)
				{
					return *it;
				}
				it++;
			}
		}
		
		//Modificadores
		void setProcesadores(list <Procesador> const & p){procesadores=p;}
		void setTiempoTotal(int t){tiempo_total=t;}
		void setNumeroProcesadores(int n){numero_procesadores=n;}
		
		//Sobrecarga
		SolucionTareas & operator = (SolucionTareas const & s);
		bool operator > (SolucionTareas const & s)const;
		
		//Funcion de salida
		void mostrar() const;
		
		// TODO Funcion auxiliar que calcula el maximo tiempo de todos los procesadores
		//Sera el tiempo total de nuestra solucion
		//Util para cuando se inserte o elimine tareas en los procesadores
		void actualizarTiempoTotal();
		// TODO Funciones para insertar o eliminar una tarea en un procesador concreto
		void addTareaInProcesador(int id, Tarea const & t);
		void deleteTareaInProcesador(int id, Tarea const & t);

};

#endif
