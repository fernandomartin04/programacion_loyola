#include<iostream>
#include<cmath>
#include"cabecera.h"
using namespace std;

void introducir(int v[], int n){

	for (int i = 0; i < n; i++){
		cout << "Introduce el valor del grado " << i << " del polinomio" << endl;
		cin >> v[i];
	}

}

void mostrar (int v[], int n) {

	for (int i = n - 1; i >= 0; i--){
		if (i == 0) {
			if (v[i] > 0){
				cout << " + " << v[i] << endl;
			} else {
				cout << v[i] << endl;
			}
			
		}
		else if (v[i] > 0) {
			cout << " + " << v[i] << "x^" << i;
		}
		else {
			cout << v[i] << "x^" << i;
		}
		
	}

}
void evaluar (int v[], int n, int x){
	int sol = 0;
	for (int i = 1; i < n; i++){
		sol += (v[i] * pow(x, i));
	}
	sol += v[0];
	cout << "La solucion cuando x = " << x << " es " << sol << endl;

}
