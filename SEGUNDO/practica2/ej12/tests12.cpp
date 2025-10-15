#include <iostream>
#include "cabecera.h"
using namespace std;

void testCaso(int b, int e, long int esperado, string nombre) {
	bool ok = funcionNoFinal(b, e) == esperado &&
	          funcionFinal(b, e) == esperado &&
	          funcionIterativa(b, e) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS SUMA POTENCIAS ---" << endl;

	testCaso(2, 3, 14,  "Caso 1: 2^1 + 2^2 + 2^3");
	testCaso(3, 2, 12,  "Caso 2: 3^1 + 3^2");
	testCaso(5, 1, 5,   "Caso 3: 5^1");
	testCaso(2, 5, 62,  "Caso 4: 2^1...2^5");
	testCaso(10, 2, 110, "Caso 5: 10^1 + 10^2");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

