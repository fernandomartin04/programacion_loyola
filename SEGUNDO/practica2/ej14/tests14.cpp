#include <iostream>
#include "cabecera.h"
using namespace std;

void testCaso(int n, long int esperado) {
	bool ok = funcionRecursiva(n) == esperado &&
	          funcionIterativa(n) == esperado;

	cout << (ok ? "[OK]   " : "[FAILED] ") << "n = " << n << " → esperado = " << esperado << endl;
}

int main() {
	cout << "--- TESTS f(n) = 3f(n-1) + f(n-2) ---" << endl;

	testCaso(0, 1);
	testCaso(1, 1);
	testCaso(2, 4);   // 3*1 + 1
	testCaso(3, 13);  // 3*4 + 1
	testCaso(4, 43);  // 3*13 + 4
	testCaso(5, 142); // 3*43 + 13
	testCaso(6, 469); // 3*142 + 43
	testCaso(7, 1549);
	testCaso(8, 5116);
	testCaso(9, 16897);
	testCaso(10, 55807);

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

