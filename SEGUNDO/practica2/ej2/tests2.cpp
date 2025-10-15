#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

bool iguales(float a, float b, float epsilon = 1e-3) {
	return fabs(a - b) < epsilon;
}

void testCaso(float* v, int n, float esperado, const string& nombre) {
	bool ok = iguales(funcionNoFinal(v, n), esperado)
	       && iguales(funcionFinal(v, n), esperado)
	       && iguales(funcionIterativa(v, n), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS SUMA CUADRADO RAÍZ CÚBICA ---" << endl;

	float v1[] = {1.0, 8.0, 27.0};       // raíz cúbica: 1,2,3 → cuadrado: 1,4,9 → suma: 14
	float v2[] = {0.0, -1.0, -8.0};      // raíz cúbica: 0,-1,-2 → cuadrado: 0,1,4 → suma: 5
	float v3[] = {0.125};                // raíz cúbica: 0.5 → cuadrado: 0.25
	float v4[] = {};                     // suma: 0

	testCaso(v1, 3, 14.0, "Caso 1: {1,8,27}");
	testCaso(v2, 3, 5.0, "Caso 2: {0,-1,-8}");
	testCaso(v3, 1, 0.25, "Caso 3: {0.125}");
	testCaso(v4, 0, 0.0, "Caso 4: {}");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

