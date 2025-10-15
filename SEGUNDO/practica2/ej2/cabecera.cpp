#include "cabecera.h"

float funcionNoFinal(float *v, int n){
	if (n == 0) {
		return 0;
	}
	else {
		return pow(cbrt(*v),2) + funcionNoFinal(v+1, n-1);
	}
}


float funcionAuxFinal(float *v, int n, float acum) {
	if (n == 0) {
		return acum;
	}
	else {
		return funcionAuxFinal(v+1, n-1, acum + pow(cbrt(*v),2));
	}
}

float funcionFinal(float *v, int n) {
	return funcionAuxFinal(v, n, 0);
	
}

float funcionIterativa(float *v, int n) {
	float acum = 0;
	for (int i = 0; i < n; i++) {
		acum += pow(cbrt(v[i]),2);
	}
	return acum;
}