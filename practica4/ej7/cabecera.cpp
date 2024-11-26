#include<iostream>
#include"cabecera.h"
using namespace std;

void mostrar(int v[], int n){

	for (int i=0; i<n; i++){
		cout << v[i] << " ";
	}
	cout << endl;

}

void invertir(int v[], int n){

	int aux[n];
	int j = 0;
	for (int i = n - 1; i>=0; i--){	
		aux[j] = v[i];
		j++;
	}
	for (int i = 0; i<n; i++){
		v[i] = aux[i];
	}
}
