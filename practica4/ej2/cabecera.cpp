#include"cabecera.h"

int factorial(int entrada) {
	
	int sol = 1;
	
	for (int i=1; i<=entrada; i++) {
		sol = sol * i; 
	}
	
	return sol;
}

int combinatorio(int n, int k) {
	
	// C(n,k) = n! / (k!*(n-k)!)
	int num = factorial(n);
	int denom1 = factorial(k);
	int denom2 = factorial(n - k);
	
	int resultado = num / (denom1 * denom2);
	
	return resultado;
}
