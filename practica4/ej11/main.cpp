#include<iostream>
#include"cabecera.h"
using namespace std;


int main() {
	int matriz[DIM][DIM];
	int v[DIM];
	int f, c;

  	cout << "Introduce el número de filas: ";
	cin >> f;
	cout << "Introduce el número de columnas: ";
   	cin >> c;

	// Lleno la matriz con datos
	leer(matriz, f, c);

	// Muestro la matriz inicial
	cout << "Así queda la matriz: " << endl;
	mostrar(matriz, f, c);

	media(matriz[][DIM],f,c,v[]);
	// Muestro el vecto finalcon la media
	cout << "Y así queda un vector con la media de los elementos de cada columna: " << endl;
	mostrarV(matriz, f, c);

	return 0;
}

