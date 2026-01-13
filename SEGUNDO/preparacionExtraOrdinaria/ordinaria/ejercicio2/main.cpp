#include<iostream>
#include"problema.h"

using namespace std;


int main()
{
	int n=3;
	int ** m = new int *[n];
	for(int i=0; i<n; i++)
	{
		m[i]=new int[n];
	}
	
	string * nombres = new string[n];
	
	//Rellenamos un ejemplos
	m[0][0]=4;
	m[0][1]=9;
	m[0][2]=1;
	m[1][0]=7;
	m[1][1]=2;
	m[1][2]=3;
	m[2][0]=8;
	m[2][1]=3;
	m[2][2]=5;
	
	nombres[0]="Dos Hermanas";
	nombres[1]="Entrenucleos";
	nombres[2]="Montequinto";
	
	Problema p1(m,nombres,n);
	
	cout << "Backtracking: " << endl;
	Solucion sBt = p1.ejecutaBacktracking();
	sBt.mostrar();
	
	for(int i=0; i<n; i++)
	{
		delete [] m[i];
	}
	
	delete [] m;

	return 0;
}
