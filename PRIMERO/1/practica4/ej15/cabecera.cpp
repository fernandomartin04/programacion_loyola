#include<iostream>
#include"cabecera.h"
using namespace std;

// Hay que pasar por referencia para que se guarde en el struct!!
void leer(complejo v[], int num) {
	for (int i = 0; i < num; i++){
		cout << "Parte real" << endl;
		cin >> v[i].real;
		cout << "Parte imaginaria" << endl;
		cin >> v[i].im; 
	}
}

void mostrar(complejo v[], int num) {
	
	for (int i = 0; i < num; i++){
		cout << v[i].real << " + " << v[i].im << "i" << endl;
	}	
	
}

void suma(complejo v[], int num, float sum[]){

	for (int i = 0; i < num; i++){
		sum[0] += v[i].real;
		sum[1] += v[i].im;
	}

}

void media(complejo v[], int num, float sum[], float med[]){

	med[0] = sum[0] / num;
	med[1] = sum[1] / num;

}
