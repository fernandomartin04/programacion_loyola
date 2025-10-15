#include<iostream>
#include "cabecera.h"
using namespace std;

void test(int n, long int esperado) {
	bool ok = funcionRecursiva(n) == esperado && funcionIterativa(n) == esperado;
	cout << (ok ? "[OK]   " : "[FAILED] ") << "g(" << n << ") = " << esperado << endl;
}

int main() {
	cout << "--- TESTS g(n) ---\n";

	test(0, 0);
	test(1, 1);
	test(2, 4);
	test(3, 2*4 - 1 + 0);   // 7
	test(4, 2*7 - 4 + 1);   // 11
	test(5, 2*11 - 7 + 4);  // 19
	test(6, 2*19 -11 + 7);  // 34
	test(7, 2*34 - 19 + 11); // 60
	test(8, 2*60 - 34 + 19); // 105

	cout << "--- FIN TESTS ---\n";
	return 0;
}

