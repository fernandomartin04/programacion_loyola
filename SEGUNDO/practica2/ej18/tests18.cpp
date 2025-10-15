#include <iostream>
#include "cabecera.h"
using namespace std;

bool iguales(resultado r1, resultado r2) {
	return r1.suma == r2.suma && r1.nImpares == r2.nImpares && r1.minimo == r2.minimo;
}

void testCaso(int n, resultado esperado, string nombre) {
	bool ok = iguales(funcionNoFinal(n), esperado) &&
	          iguales(funcionFinal(n), esperado) &&
	          iguales(funcionIterativa(n), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS DIVISIÓN CIFRAS ---\n";

	testCaso(5863, {100, 2, 3}, "Caso 1: 5863");
	testCaso(123456, {56, 3, 1}, "Caso 2: 123456");
	testCaso(1111, {0, 4, 1}, "Caso 3: 1111");
	testCaso(0, {0, 0, 0}, "Caso 4: 0");
	testCaso(987654, {116, 3, 4}, "Caso 5: 987654");

	cout << "--- FIN TESTS ---\n";
	return 0;
}

