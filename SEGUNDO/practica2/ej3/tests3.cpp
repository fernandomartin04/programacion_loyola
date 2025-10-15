#include <iostream>
#include "cabecera.h"

using namespace std;

void testCaso(string cad, int esperado, string nombre) {
	bool ok = funcionNF(cad) == esperado &&
	          funcionF(cad) == esperado &&
	          funcionIterativa(cad) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS CONTAR VOCALES ---" << endl;

	testCaso("Hola mundo", 4, "Caso 1: 'Hola mundo'");
	testCaso("BCDFGHJKLMNPQRSTVWXYZ", 0, "Caso 2: sin vocales");
	testCaso("aeiouAEIOU", 10, "Caso 3: todas vocales");
	testCaso("", 0, "Caso 4: cadena vacía");
	testCaso("PrOgRaMaCiOn", 5, "Caso 5: mezcla mayúsculas");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

