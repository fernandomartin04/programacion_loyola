#include<iostream>
#include"cabecera.h"

using namespace std;

int main()
{
	int n;
	cout << "Introduzca el tamanio del vector: ";
	cin >> n;
	
	int * v = new int[n];
	for(int i=0; i<n; i++)
	{
		v[i]=i+1;
	}
	
	cout << "Vector generado: " << endl;
	mostrarV(v,n);
	
	int k;
	cout << "Introduzca el valor de k para rotar: ";
	cin >> k;
	rotarV(v,n,k);
	cout << "Vector rotado: " << endl;
	mostrarV(v,n);
	
	int m = maxG(v,n);
	
	cout << "El elemento maximo del vector es: " << m << endl;
	
	delete [] v;


	return 0;
}