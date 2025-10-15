#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(int n, int esperado, string nombre) {
	bool ok = funcionNoFinal(n) == esperado &&
	          funcionFinal(n) == esperado &&
	          funcionIterativo(n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS SUMA 1..n ---" << endl;

	testCaso(0, 0, "Caso 0");
	testCaso(1, 1, "Caso 1");
	testCaso(5, 15, "Caso 5");
	testCaso(10, 55, "Caso 10");
	testCaso(100, 5050, "Caso 100");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

