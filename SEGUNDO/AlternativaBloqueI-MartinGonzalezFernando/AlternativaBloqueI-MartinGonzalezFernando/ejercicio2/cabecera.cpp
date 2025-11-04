#include<iostream>
#include"cabecera.h"

using namespace std;

//TODO Apartado c) Funcion recursiva multiple


//TODO Apartado d) Funcion iterativa
int funcionI(int n) {
	int aux = 1; 
	while (n > 1) {
		if (n == 0) aux += (2*n+1)/(n+2);
		else if (n <= 2) aux += (3*n-3)/(n/2);
		else aux *= n;
		n--;
	}

	return aux;
}
