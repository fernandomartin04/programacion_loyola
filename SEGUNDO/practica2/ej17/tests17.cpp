#include <iostream>
#include "cabecera.h"
using namespace std;

bool iguales(resultado a, resultado b) {
	return a.producto == b.producto &&
	       a.nPares == b.nPares &&
	       a.suma == b.suma;
}

void testCaso(int n, resultado esperado, string nombre) {
	bool ok = iguales(funcionNoFinal(n), esperado) &&
	          iguales(funcionFinal(n), esperado) &&
	          iguales(funcionIterativa(n), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS DIGITO PRODUCTO - PARES - SUMA ---" << endl;

	testCaso(5394, {540, 1, 21}, "Caso 1: 5394");
	testCaso(1234, {24, 2, 10}, "Caso 2: 1234");
	testCaso(888,  {512, 3, 24}, "Caso 3: 888");
	testCaso(7,    {7, 0, 7}, "Caso 4: 7");
	testCaso(0,    {0, 1, 0}, "Caso 5: 0"); // Consideramos 0 como una cifra par

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

