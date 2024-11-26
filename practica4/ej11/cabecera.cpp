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
void mostrarV(int v[], int c){

	for (int i = 0; i < c; i++){
		cout << v[i] << " ";
	}

}

void media(int matriz[][DIM], int f, int c, int v[]) {
    	
	for(int i = 0; i < c; i++){
		int sum = 0;
		for (int j = 0; j < f; j++){
			sum += matriz[j][i];
		}
		v[i] = sum / f;
	}
   
}

