#include <iostream>
#include "cabecera.h"
using namespace std;

bool vuelosIguales(Vuelo const & v1, Vuelo const & v2) {
	return v1.getNombre() == v2.getNombre() &&
	       v1.getAsientos() == v2.getAsientos() &&
	       v1.getPrecio() == v2.getPrecio();
}

void testCaso(Vuelo* vs, int n, Vuelo esperado, string nombre) {
	bool ok = vuelosIguales(funcionNoFinal(vs, n), esperado) &&
	          vuelosIguales(funcionFinal(vs, n), esperado) &&
	          vuelosIguales(funcionIterativa(vs, n), esperado);

	cout << (ok ? "[OK]   " : "[FAILED] ") << nombre << endl;
}

int main() {
	cout << "--- TESTS MAYOR GANANCIA DE VUELOS ---" << endl;

	Vuelo v1[] = {
		Vuelo("A", 10, 100),   // 1000
		Vuelo("B", 5, 300),    // 1500 ✅
		Vuelo("C", 8, 120)     // 960
	};
	Vuelo esperado1("B", 5, 300);

	Vuelo v2[] = {
		Vuelo("X", 3, 500),
		Vuelo("Y", 10, 150)
	};
	Vuelo esperado2("X", 3, 500); // 1500 y X es primero

	Vuelo v3[] = {
		Vuelo("Z", 0, 1000),
		Vuelo("W", 1, 0)
	};
	Vuelo esperado3("Z", 0, 1000); // Ambos 0, pero Z es primero

	Vuelo v4[] = {
		Vuelo("Solo", 7, 7)
	};
	Vuelo esperado4("Solo", 7, 7);

	testCaso(v1, 3, esperado1, "Caso 1: vuelo B tiene mayor ganancia");
	testCaso(v2, 2, esperado2, "Caso 2: vuelo Y gana más");
	testCaso(v3, 2, esperado3, "Caso 3: vuelos con 0 ganancia");
	testCaso(v4, 1, esperado4, "Caso 4: un solo vuelo");

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

