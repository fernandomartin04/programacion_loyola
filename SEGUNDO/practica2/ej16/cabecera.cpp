#include "cabecera.h"

bool esPrimo(int n) {
	int primo = 0;
	if (n == 1) return true;
	for (int i = 1; i <= n; i++) {
		if(n % i == 0) {
			primo++;
		}
	}
	if (primo == 2) return true;
	else return false;
}

list<int> funcionNoFinalAux(int n, int i) {
	if (i > n) {
		list<int> vacia;
		return vacia;
	}
	
	list<int> resto = funcionNoFinalAux(n, i + 1);
	
	if (n % i == 0 && esPrimo(i)) resto.push_front(i);
		
	return resto;
}

list<int> funcionNoFinal(int n) {
	return funcionNoFinalAux(n, 1);
}


list<int>funcionFinalAux(int n, int i, list<int> acum) {
	if(i > n) return acum;
	if (n % i == 0 && esPrimo(i)) acum.push_back(i);
	return funcionFinalAux(n, i + 1, acum);
}

list<int> funcionFinal(int n) {
	return funcionFinalAux(n, 1, {});
}

list<int> funcionIterativa(int n) {
	int i = 1;
	list<int> divisoresPrimos;
	
	while(i <= n) {
		if (n % i == 0 && esPrimo(i)) divisoresPrimos.push_back(i);
		i++;
	}
	return divisoresPrimos;
}