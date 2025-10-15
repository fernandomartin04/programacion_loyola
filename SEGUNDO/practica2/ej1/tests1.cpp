#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(int* v, int n, long esperado, const string& nombre) {
	bool ok = funcionNoFinal(v, n) == esperado &&
	          funcionFinal(v, n) == esperado &&
	          funcionIterativa(v, n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS PRODUCTO ARRAY ---" << endl;

	int v1[] = {1, 2, 3, 4};       // 24
	int v2[] = {5, -2, 1};         // -10
	int v3[] = {7};                // 7
	int v4[] = {};                 // 1 (producto vacío = neutro)
	int v5[] = {0, 2, 3};          // 0

	testCaso(v1, 4, 24, "Test 1: {1,2,3,4}");
	testCaso(v2, 3, -10, "Test 2: {5,-2,1}");
	testCaso(v3, 1, 7, "Test 3: {7}");
	testCaso(v4, 0, 1, "Test 4: {}");
	testCaso(v5, 3, 0, "Test 5: {0,2,3}");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

