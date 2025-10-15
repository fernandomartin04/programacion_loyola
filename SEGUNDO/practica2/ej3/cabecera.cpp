#include "cabecera.h"

bool esVocal(char c) {
	return c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U';
}

int funcionNFAux(const string& cad, int i) {
	if (i == cad.length()) return 0;
	int suma = esVocal(cad[i]);
	return suma + funcionNFAux(cad, i+1);
}
int funcionNF(const string& cad) {
	return funcionNFAux(cad, 0);
}

int funcionFAux(const string& cad, int i, int acum) {
	if (i == cad.length()) return acum;
	return funcionFAux(cad, i+1, acum + (esVocal(cad[i])));
} 

int funcionF(const string& cad) {
	return funcionFAux(cad, 0, 0);
}

int funcionIterativa(const string& cad) {
	int acum = 0;
	for (int i = 0; i < cad.length(); i++) {
		if (esVocal(cad[i])) acum++;
	}
	return acum;
}