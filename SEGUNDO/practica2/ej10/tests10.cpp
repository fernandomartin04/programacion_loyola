#include <iostream>
#include "cabecera.h"
using namespace std;

void testCaso(string cad, bool esperado, string nombre) {
	bool ok = funcionNoFinal(cad) == esperado &&
	          funcionFinal(cad) == esperado &&
	          funcionIterativa(cad) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS PALÍNDROMOS ---" << endl;

	testCaso("ana", true, "Caso 1: 'ana'");
	testCaso("reconocer", true, "Caso 2: 'reconocer'");
	testCaso("salas", true, "Caso 3: 'salas'");
	testCaso("palabra", false, "Caso 4: 'palabra'");
	testCaso("a", true, "Caso 5: 'a'");
	testCaso("", true, "Caso 6: cadena vacía");
	testCaso("abcba", true, "Caso 7: 'abcba'");
	testCaso("abccba", true, "Caso 8: 'abccba'");
	testCaso("abcd", false, "Caso 9: 'abcd'");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

