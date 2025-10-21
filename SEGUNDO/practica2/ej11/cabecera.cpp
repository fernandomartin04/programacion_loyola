#include "cabecera.h"
#include <iostream>
#include <list>
using namespace std;

bool esPalindromo(const string& cad, int i, int j) {
	if (i >= j) return true;
	if (cad[i] != cad[j]) return false;
	else return esPalindromo(cad, i + 1, j - 1);
}

bool funcionNoFinal(const string& cad) {
	return esPalindromo(cad, 0, cad.size() - 1);
}

bool funcionFinalAux(const string& cad, int i, int j, bool acum) {
	if (i >= j) return acum;
	acum = acum && (cad[i] == cad[j]);
	
	return funcionFinalAux(cad, i + 1, j - 1, acum);
}

bool funcionFinal(const string& cad) {
	return funcionFinalAux(cad, 0, cad.size() - 1, true);
}

bool funcionIterativa(const string& cad) {
	
	int i = 0, j = cad.size() - 1;
	
	while (i < j) {
		if (cad[i] != cad[j]) return false;
		i++;
		j--;
	}
	return true;
}
