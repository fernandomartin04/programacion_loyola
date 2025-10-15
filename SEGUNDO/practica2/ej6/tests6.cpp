#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(int a, int b, int esperado, const string& nombre) {
	bool ok = funcionNoFinal(a, b) == esperado &&
	          funcionFinal(a, b) == esperado &&
	          funcionIterativa(a, b) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS MULTIPLICACIÓN POR SUMAS ---" << endl;

	testCaso(3, 4, 12, "Caso 1: 3*4");
	testCaso(0, 5, 0,  "Caso 2: 0*5");
	testCaso(7, 0, 0,  "Caso 3: 7*0");
	testCaso(1, 1, 1,  "Caso 4: 1*1");
	testCaso(5, 5, 25, "Caso 5: 5*5");
	testCaso(9, 3, 27, "Caso 6: 9*3");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

