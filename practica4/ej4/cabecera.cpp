#include<iostream>
#include"cabecera.h"

using namespace std;

int primo(int num) {
	int cont = 0;
	bool prim = false;
	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			cont++;
		}
	}
	if (cont == 2) {
		prim = true;
	}
	
	return prim;
}

void print(int num, int a, int b ){

	for (int i = a; i <= b; i++){
		if (primo(i)) {
			cout << "El numero " << i << " de dentro del rango es primo" << endl;
		}
	}

}
