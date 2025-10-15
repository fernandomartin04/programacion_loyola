#include "cabecera.h"

int funcionNoFinal(int *v, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (*v) * funcionNoFinal(v+1, n-1);
	}
}

int funcionAuxFinal(int *v, int n, int acum) {
	if (n == 0) {
		return acum;
	}
	else {
		return funcionAuxFinal(v+1, n-1, acum * (*v));
	}
}

int funcionFinal(int *v, int n) {
	return funcionAuxFinal(v, n, 1);
}

int funcionIterativa(int *v, int n) {
	int aux = 1;
	for(int i=0; i<n; i++ ) {
		aux*=v[i];

	}
	return aux;

}

