#include<iostream>
#include"cabecera.h"
using namespace std;

void leer(int matriz[][DIM], int f, int c) {
	int cont = 0;

	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			matriz[i][j] = cont;
			cont++;
        	}
    	}
}

void mostrar(int matriz[][DIM], int f, int c) {
    	cout << "La matriz queda así:" << endl;
    	for (int i = 0; i < f; i++) {
        	for (int j = 0; j < c; j++) {
            		cout << matriz[i][j] << " ";
        	}
        	cout << endl;
    	}
}

void intercambiar(int matriz[][DIM], int f, int c, int fila1, int fila2) {
    	// Validación de filas
    	if (fila1 < 0 || fila1 >= f || fila2 < 0 || fila2 >= f) {
        	cout << "ERROR: Las filas están fuera del rango permitido." << endl;

    	} else{
    		int aux[DIM];

    		// Guardar la fila1 en aux
    		for (int j = 0; j < c; j++) {
        		aux[j] = matriz[fila1][j];
    		}

	    	// Copiar fila2 en fila1
    		for (int j = 0; j < c; j++) {
        		matriz[fila1][j] = matriz[fila2][j];
    		}

		// Copiar aux en fila2
		for (int j = 0; j < c; j++) {
			matriz[fila2][j] = aux[j];
		}
    	}

    
}

