#include "cabecera.h"

resultado funcionNoFinal(int n) {
	if (n == 0) return {0,1,0};
	if (n < 10) {
		int digito = n;
		return {digito, (digito % 2 == 0), digito};
	}
	
	resultado r = funcionNoFinal(n / 10);
	int digito = n % 10;
	if (digito % 2 == 0) r.nPares++;
	r.producto *= digito;
	r.suma += digito;
	
	return r;
}

resultado funcionFinalAux(int n, int multi, int pares, int suma) {
	if (n == 0) return {multi,pares,suma};
	
	int digito = n % 10;
	
	if (digito % 2 == 0) pares++;
	multi *= digito;
	suma += digito;
	return funcionFinalAux(n / 10, multi, pares, suma);

}

resultado funcionFinal(int n) {
	if (n == 0) return {0,1,0};
	return funcionFinalAux (n, 1, 0, 0);
}

resultado funcionIterativa(int n) {
	if (n == 0) return {0,1,0};
	int multi = 1;
	int pares = 0;
	int suma = 0;
	
	while (n > 0) {
		int digito = n % 10;
		multi *= digito;
		suma += digito;
		if (digito % 2 == 0) pares++;
		n = n /10;
	}
	resultado r;
	r.nPares = pares;
	r.producto = multi;
	r.suma = suma;
	return r;
}