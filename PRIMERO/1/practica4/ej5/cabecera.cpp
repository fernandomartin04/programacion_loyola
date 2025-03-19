#include<iostream>
#include"cabecera.h"
using namespace std;

int perfecto (int num){

	bool perfect = false;
	int sum = 0;
	for (int i = 1; i < num; i++){
		if ((num % i) == 0) {
			sum += i;
		}
	}
	if (sum == num){
		perfect = true;
	}
	return perfect;
}

void print (int num, int a, int b){
	bool encontrado = false;
	for (int i = a; i <= b; i++){
		if (perfecto(i) == true){
			cout << "El num " << i << " es perfecto" << endl;	
			encontrado = true;
		}
	}
	if (!encontrado) {
		cout << "No se ha encontrado ningun numero perfecto en el rango" << endl;
	}

}
