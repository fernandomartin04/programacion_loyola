#include<iostream>
#include"reina.h"
#include"solucionreina.h"
#include<list>
#include<set>

using namespace std;
		
//Sobrecarga
SolucionReina & SolucionReina::operator = (SolucionReina const & sol)
{
	setReinas(sol.getReinas());
	setDPUsadas(sol.getDPUsadas());
	setDSUsadas(sol.getDSUsadas());
	setCUsadas(sol.getCUsadas());
	return *this;
}

//Funciones de salida
void SolucionReina::mostrarParcial() const
{
	list <Reina>::const_iterator it = reinas.begin();
	while(it!=reinas.end())
	{
		it->mostrar();
		it++;
	}
}
void SolucionReina::mostrar() const
{
	mostrarParcial();
	int n=reinas.size();
	int ** m = new int *[n];
	for(int i=0; i<n; i++)
	{
		m[i]=new int[n];
		for(int j=0; j<n; j++)
		{
			m[i][j]=0;
		}
	}
	
	list <Reina>::const_iterator it = reinas.begin();
	while(it!=reinas.end())
	{
		m[it->getFila()][it->getColumna()]=1;
		it++;
	}
	
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
		delete [] m[i];
	}
	delete [] m;
}

// TODO Funciones de insercion y eliminado de reinas
void SolucionReina::addReina(Reina const & r)
{
	reinas.push_back(r);
	dp_usadas.insert(r.getDPrincipal());
	ds_usadas.insert(r.getDSecundaria());
	c_usadas.insert(r.getColumna());
}

void SolucionReina::deleteReina(Reina const & r)
{
	reinas.pop_back();
	dp_usadas.erase(r.getDPrincipal());
	ds_usadas.erase(r.getDSecundaria());
	c_usadas.erase(r.getColumna());
}
