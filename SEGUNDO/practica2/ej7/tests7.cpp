#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(bool* v, int n, bool esperado, const string& nombre) {
	bool ok = funcionNoFinal(v, n) == esperado &&
	          funcionFinal(v, n) == esperado &&
	          funcionIterativa(v, n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS TODOS TRUE ---" << endl;

	bool v1[] = {true, true, true};         // true
	bool v2[] = {true, false, true};        // false
	bool v3[] = {false, false, false};      // false
	bool v4[] = {};                         // true
	bool v5[] = {true};                     // true
	bool v6[] = {false};                    // false

	testCaso(v1, 3, true,  "Caso 1: todos true");
	testCaso(v2, 3, false, "Caso 2: uno false");
	testCaso(v3, 3, false, "Caso 3: todos false");
	testCaso(v4, 0, true,  "Caso 4: vacío");
	testCaso(v5, 1, true,  "Caso 5: uno true");
	testCaso(v6, 1, false, "Caso 6: uno false");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

