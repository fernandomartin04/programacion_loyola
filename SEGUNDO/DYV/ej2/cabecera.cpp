#include "cabecera.h"

int fun(int* v, int* u, int x0, int x1) {
	if(x0 == x1) return x0;
	int mitad = (x0+x1)/2;

	
	if(v[mitad] == u[mitad]) return fun(v, u, x0, mitad);
	else return fun(v, u, mitad + 1, x1);
}

int fun(int* v, int* u, int n) {
	return fun(v, u, 0, n-1);
}