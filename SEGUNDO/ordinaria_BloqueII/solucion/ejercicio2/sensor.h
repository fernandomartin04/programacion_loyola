#ifndef _SENSOR_H_
#define _SENSOR_H_

#include<iostream>

using namespace std;

class Sensor
{
	private:
		int codigo_sensor;
		int nivel_precision;
	public:
		//CONSTRUCTOR
		Sensor(int cod=-1, int n=-1)
		{
			setCodSensor(cod);
			setNivelPrecision(n);
		}
		
		Sensor(Sensor const & s)
		{
			*this = s;
		}
		
		//OBSERVADORES
		int getCodSensor() const {return codigo_sensor;}
		int getNivelPrecision() const {return nivel_precision;}
		
		//MODIFICADORES
		void setCodSensor(int cod){codigo_sensor=cod;}
		void setNivelPrecision(int n){nivel_precision=n;}
		
		//SOBRECARGA
		Sensor & operator = (Sensor const & s);
		bool operator < (Sensor const & t) const;
		
		//FUNCION DE SALIDA
		void mostrar() const;
		
};

#endif
