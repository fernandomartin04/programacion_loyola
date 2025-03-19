#include<iostream>
#include"cabecera.h"
using namespace std;

void leer(int matriz[][DIM], int f, int c) {

	int cont = 0;
	for (int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			matriz[i][j] = cont;
			cont++;
		}
	}
}

void mostrar (int matriz[][DIM], int f, int c) {
	for (int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

void rotar(int matriz[][DIM], int c, int k, int n) {

	int v[c];
	for (int i = 0; i < c; i++){
		v[(i + k)%c] = matriz[n][i];
	}
	// Return values from v[] to the original matriz
	for (int i = 0; i < c; i++){
		matriz[n][i] = v[i];
	}

}
