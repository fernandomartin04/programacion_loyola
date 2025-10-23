#include "cabecera.h"

string invertir(const string& cad, int i, int mitad) {
	if (i < mitad) return "";
	else return string(1, cad[i]) + invertir(cad, i - 1,  mitad);
}

string funcionNoFinal(const string& cad) {
	int mitad = cad.size() / 2 + cad.size() % 2;
	string espejo = invertir(cad, cad.size() - 1, mitad);
	if (cad.size() % 2 != 0) return espejo + cad.substr(mitad - 1);
	else return espejo + cad.substr(mitad);
}

string funcionFinalAux(const string& cad, int i, string cadAux, int mitad) {
	if(i < mitad) {
		if (cad.size() % 2 != 0) return cadAux + cad.substr(mitad - 1);
		else return cadAux + cad.substr(mitad);
	}
	cadAux.push_back(cad[i]);
	return funcionFinalAux(cad, i - 1, cadAux, mitad);
}

string funcionFinal(const string& cad){
	int mitad = cad.size() /2 + cad.size() % 2;
	return funcionFinalAux(cad, cad.size() - 1, "", mitad);
}

string funcionIterativa(const string& cad){
	int mitad = cad.size() /2 + cad.size() % 2;
	string cadAux = "";
	int i = cad.size() - 1;
	
	while(i >= mitad) {
		cadAux.push_back(cad[i]);
		i--;
	}
	if (cad.size() % 2 != 0) cadAux += cad.substr(mitad - 1);
	else cadAux += cad.substr(mitad);
	return cadAux;
}