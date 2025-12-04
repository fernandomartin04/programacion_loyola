#include "cabecera.h"

int fun(int* v, int x0, int x1) {
	if (x0 > x1) return -1;
	int mitad = (x0+x1) / 2;

	if (v[mitad] == mitad) return mitad;
	
	if (v[mitad] > mitad) {
		return fun(v, x0, mitad - 1);
	}
	else return fun(v, mitad + 1, x1);
}

int fun(int* v, int n) {
	return fun(v, 0, n-1);
}