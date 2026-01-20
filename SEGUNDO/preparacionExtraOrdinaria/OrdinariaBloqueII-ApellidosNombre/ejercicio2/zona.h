#ifndef _ZONA_H_
#define _ZONA_H_

#include<iostream>
#include"sensor.h"

using namespace std;

class Zona
{
	private:
		int codigo_zona;
		string nombre;
		int cantidad;
		Sensor sensor;
		
		
	public:
		//Constructor
		Zona(string n="", int c=-1, int ca=0, Sensor const & s=Sensor())
		{
			setCodZona(c);
			setNombre(n);
			setCantidad(ca);
			setSensor(s);
		}

		Zona(Zona const & z)
		{
			*this = z;
		}
		
		//Observadores
		int getCodZona() const {return codigo_zona;}
		string getNombre() const {return nombre;}
		int getCantidad() const {return cantidad;}
		Sensor getSensor() const {return sensor;}
		
		//Modificadores
		void setCodZona(int z) {codigo_zona=z;}
		void setNombre(string n) {nombre=n;}
		void setCantidad(int c) {cantidad=c;}
		void setSensor(Sensor const & s) {sensor=s;}
		
		//Sobrecarga
		Zona & operator=(Zona const & z);
		bool operator < (Zona const & z) const;
		
		//Funcion de salida
		void mostrar() const;
};

#endif
