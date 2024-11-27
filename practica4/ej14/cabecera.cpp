#include<iostream>
#include"cabecera.h"
using namespace std;

// Hay que pasar por referencia para que se guarde en el struct!!
void leer(matriz &m) {

	for (int i = 0; i < m.nFil; i++){
		for(int j = 0; j < m.nCol; j++){
			cout << "Introduce el valor: " << i << " , " << j << endl;
			cin >> m.m[i][j];
		}
	}
}

void mostrar (matriz m) {
	for (int i = 0; i < m.nFil; i++){
		for(int j = 0; j < m.nCol; j++){
			cout << m.m[i][j] << " ";
		}
		cout << endl;
	}
}

int diagonal(matriz m) {
	int sum = 0;
	for(int i = 0; i < m.nFil; i++) {
		for(int j = 0; j < m.nCol; j++) {
			if (i > j){
				sum += m.m[i][j];
			}	
		}
	}
	return sum;

}
