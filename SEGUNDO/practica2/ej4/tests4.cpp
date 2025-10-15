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
	cout << "--- TESTS CUADRADOS PERFECTOS ---" << endl;

	int v1[] = {1, 4, 9, 16};       // true
	int v2[] = {1, 2, 3, 4};        // false
	int v3[] = {0};                 // true
	int v4[] = {25, 36, 49};        // true
	int v5[] = {10, 20};            // false
	int v6[] = {};                  // true (caso vacío)

	testCaso(v1, 4, true,  "Caso 1: {1,4,9,16}");
	testCaso(v2, 4, false, "Caso 2: {1,2,3,4}");
	testCaso(v3, 1, true,  "Caso 3: {0}");
	testCaso(v4, 3, true,  "Caso 4: {25,36,49}");
	testCaso(v5, 2, false, "Caso 5: {10,20}");
	testCaso(v6, 0, true,  "Caso 6: vacío");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

