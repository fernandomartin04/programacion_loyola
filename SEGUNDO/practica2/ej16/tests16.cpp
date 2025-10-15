#include <iostream>
#include <list>
#include "cabecera.h"

using namespace std;

bool iguales(list<int> a, list<int> b) {
	return a == b;
}

void testCaso(int n, list<int> esperado, string nombre) {
	bool ok = iguales(funcionNoFinal(n), esperado) &&
	          iguales(funcionFinal(n), esperado) &&
	          iguales(funcionIterativa(n), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS DIVISORES PRIMOS ---" << endl;

	testCaso(12, {1, 2, 3}, "Caso 1: 12 → [2,3]");
	testCaso(30, {1, 2, 3, 5}, "Caso 2: 30 → [2,3,5]");
	testCaso(7, {1, 7}, "Caso 3: 7 → [7]");
	testCaso(1, {1}, "Caso 4: 1 → []");
	testCaso(60, {1, 2, 3, 5}, "Caso 5: 60 → [2,3,5]");
	testCaso(97, {1, 97}, "Caso 6: 97 → [97]");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

