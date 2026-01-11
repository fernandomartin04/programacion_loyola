#include<iostream>
#include"robot.h"

using namespace std;

//TODO a) Funciones que se definen en este fichero cpp
//Sobrecarga del operador =
Robot & Robot::operator = (Robot const & r)
{
	setNombre(r.getNombre());
	setCargaBateria(r.getCargaBateria());
	return *this;
}

//Funcion de salida
void Robot::show() const
{
	cout << "(" << getNombre() << ", " << getCargaBateria() << ")";
}

//TODO c) Funcion dobleCargaBateria
int dobleCargaBateria(Robot *v, int i, int n)
{
	if(n==1)
	{
		return v[i].getCargaBateria();
	}
	else
	{
		int t1=dobleCargaBateria(v,i,n/2);
		int t2=dobleCargaBateria(v,i+n/2,n/2);
		if((2*t1 == t2) && t1!=-1 && t2!=-1)
		{
			return t1+t2;
		}
		else
		{
			return -1;
		}
	}

}
