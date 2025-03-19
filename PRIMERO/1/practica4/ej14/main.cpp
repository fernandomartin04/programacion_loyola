#include<iostream>
#include"cabecera.h"
using namespace std;

int main() {

	// Aqui declaro la variable de la struct pa q sea mas corto
	matriz mat;	
	
	do {
		cout << "Escribeme una matriz cuadrada... es decir mismo numero de filas y columnas" << endl;
		
		cout << "Introduce el numero de filas" << endl;
		cin >> mat.nFil;
		cout << "Introduce el numero de columnas" << endl;
		cin >> mat.nCol;
	} while (mat.nFil != mat.nCol);

	// Introduzco valores en la matriz
	cout << "Muy bien, introduce sus valores" << endl;
	leer(mat);
	
	// Muestro la matriz
	cout << "La matriz es :" << endl;
	mostrar(mat);
	
	cout << "La suma de los elementos que hay por debajo de su diagonal principal es: " << endl;
	
	// Ejecuto la funcion y muestro 
	int diag = diagonal(mat);
	cout << diag << endl;

	
	return 0;
	
}

