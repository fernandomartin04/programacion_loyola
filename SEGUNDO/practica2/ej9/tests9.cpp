#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(int* v, int n, bool esperado, const string& nombre) {
	bool ok = funcionNoFinal(v, n) == esperado &&
	          funcionFinal(v, n) == esperado &&
	          funcionIterativa(v, n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS NÚMEROS PERFECTOS ---" << endl;

	int v1[] = {6, 28};        // true
	int v2[] = {6, 10};        // false
	int v3[] = {};             // true
	int v4[] = {496};          // true
	int v5[] = {5, 6, 28};     // false
	int v6[] = {8128};         // true

	testCaso(v1, 2, true,  "Caso 1: {6,28}");
	testCaso(v2, 2, false, "Caso 2: {6,10}");
	testCaso(v3, 0, true,  "Caso 3: vacío");
	testCaso(v4, 1, true,  "Caso 4: {496}");
	testCaso(v5, 3, false, "Caso 5: {5,6,28}");
	testCaso(v6, 1, true,  "Caso 6: {8128}");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

