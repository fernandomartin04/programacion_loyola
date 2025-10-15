#include <iostream>
#include "cabecera.h"
using namespace std;

bool iguales(resultado r1, resultado r2) {
	return r1.S == r2.S && r1.R == r2.R;
}

void testCaso(int A, int B, resultado esperado, string nombre) {
	bool ok = iguales(divisionNF(A, B), esperado) &&
	          iguales(divisionF(A, B), esperado) &&
	          iguales(divisionI(A, B), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS DIVISIÓN POR RESTAS ---\n";

	testCaso(10, 3, {3, 1}, "Caso 1: 10 / 3");
	testCaso(25, 4, {6, 1}, "Caso 2: 25 / 4");
	testCaso(7, 7, {1, 0}, "Caso 3: 7 / 7");
	testCaso(9, 2, {4, 1}, "Caso 4: 9 / 2");
	testCaso(1, 5, {0, 1}, "Caso 5: 1 / 5");
	testCaso(30, 8, {3, 6}, "Caso 6: 30 / 8");

	cout << "--- FIN TESTS ---\n";
	return 0;
}

