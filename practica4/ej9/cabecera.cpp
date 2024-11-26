#include<iostream>
#include"cabecera.h"
using namespace std;


int anadir(int v[], int n, int control) {
	int valor;
	if (control >= 0 && control < n ) {
		cout << "Introduce el valor que quieres introducir al vector" << endl;
		cin >> valor;
		v[control] = valor;
		control++;
	} else {
		cout << "El vector esta lleno" << endl;
	}
	return control;

}

int eliminar(int v[], int n, int control) {


	int del;
	if (control > 0){
		do {
			cout << "Introduce la posicion del vector que quieres eliminar(tienes que aver añadido algo en la posicion)" << endl;
			cin >> del;
		}while(del > control || del < 0);
		for (int i = del; i < control; i++) {
			v[i] = v[(i + 1)];
		}
		control--;
		
	} else {
		cout << "No puedes eliminar sin antes añadir" << endl;
	}
	return control;

}

void mostrar(int v[], int n, int control) {
	
	for (int i = 0; i < control; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}

void divisores(int v[], int n, int control) {
	int cont = 0;
	bool encontrado = false;
	for (int i = 0; i < control; i++) {
		if (v[i] % 5 == 0){
			cont++;
			encontrado = true;
		}
	}
	if (!encontrado) {
		cout << "No hay ningun divisor de 5" << endl;
	} else {
		cout << "Hay un total de " << cont << " divisores de 5" << endl;
	}
	
}
