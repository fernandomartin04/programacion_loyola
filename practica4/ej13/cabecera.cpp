#include<iostream>
#include"cabecera.h"
using namespace std;

void leer(int matriz[][DIM], int f, int c) {
	int p;
	for (int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout << "Introduce el valor: " << i << " , " << j << endl;
			cin >> p;
			matriz[i][j] = p;
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

void buscar(int matriz[][DIM], int f, int c, int n, int v[]) {

	for(int i = 0; i < f; i++) {
		for(int j = 0; j < c; j++) {
			if (n == matriz[i][j]){
				v[0] = i;
				v[1] = j;
				for (int h = 0; h <= 1; h++){
					cout << v[h] << " ";
				}
				cout << endl;
			}
		}
	}

}
