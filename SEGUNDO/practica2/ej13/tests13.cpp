#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(int n, int k, long int esperado, string nombre) {
	bool ok = CR(n, k) == esperado;
	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS COMBINATORIA CON REPETICIONES ---" << endl;

	testCaso(3, 2, 6, "Caso 1: CR(3,2) = 6");
	testCaso(2, 3, 4, "Caso 2: CR(2,3) = 4");
	testCaso(5, 0, 1, "Caso 3: CR(5,0) = 1");
	testCaso(1, 4, 1, "Caso 4: CR(1,4) = 1");
	testCaso(4, 1, 4, "Caso 5: CR(4,1) = 4");
	testCaso(0, 0, 1, "Caso 6: CR(0,0) = 1");
	testCaso(6, 2, 21, "Caso 7: CR(6,2) = 21");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

