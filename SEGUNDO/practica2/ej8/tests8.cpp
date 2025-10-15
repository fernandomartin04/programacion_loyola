#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(string* v, int n, string esperado, string nombre) {
	bool ok = funcionNoFinal(v, n) == esperado &&
	          funcionFinal(v, n) == esperado &&
	          funcionI(v, n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS CADENA MÁS LARGA ---" << endl;

	string v1[] = {"hola", "adiós", "bienvenido", "ok"};
	string v2[] = {"abc", "def", "ghi"};
	string v3[] = {"", "a", "ab", "abc"};
	string v4[] = {};
	string v5[] = {"largo", "máslargo", "igual", "máslargo"};

	testCaso(v1, 4, "bienvenido", "Caso 1");
	testCaso(v2, 3, "abc",        "Caso 2");
	testCaso(v3, 4, "abc",        "Caso 3");
	testCaso(v4, 0, "",           "Caso 4");
	testCaso(v5, 4, "máslargo",   "Caso 5 (empate)");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

