#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void testConstructorValido() {
	try {
		Pelicula p("Matrix&Wachowski&tt0133093&136&63");
		bool ok =
			p.getTitulo() == "Matrix" &&
			p.getDirector() == "Wachowski" &&
			p.getCodigoIMDB() == "tt0133093" &&
			p.getDuracion() == 136 &&
			p.getPresupuesto() == 63;
		cout << (ok ? "[OK] " : "[FAILED] ") << "Constructor válido" << endl;
	} catch (...) {
		cout << "[FAILED] Constructor válido lanzó excepción inesperada" << endl;
	}
}

void testCodigoIMDBInvalido() {
	try {
		Pelicula p("Peli&Dir&tt001&100&10");
		cout << "[FAILED] Código IMDB inválido no lanzado" << endl;
	} catch (const invalid_argument&) {
		cout << "[OK] Código IMDB inválido detectado" << endl;
	} catch (...) {
		cout << "[FAILED] Código IMDB inválido lanzó excepción incorrecta" << endl;
	}
}

void testDuracionInvalida() {
	try {
		Pelicula p("Peli&Dir&tt1234567&0&10");
		cout << "[FAILED] Duración inválida no lanzada" << endl;
	} catch (const invalid_argument&) {
		cout << "[OK] Duración inválida detectada" << endl;
	} catch (...) {
		cout << "[FAILED] Duración inválida lanzó excepción incorrecta" << endl;
	}
}

void testComparacionOrdenNatural() {
	Pelicula a("Inception&Nolan&tt1375666&148&160");
	Pelicula b("Inception&Zemeckis&tt9876543&148&140");

	// Mismo título, se compara por director en orden descendente: Zemeckis < Nolan
	bool ok = b < a;
	cout << (ok ? "[OK] " : "[FAILED] ") << "Comparación de orden natural" << endl;
}

int main() {
	cout << "--- TESTS PELÍCULA ---" << endl;

	testConstructorValido();
	testCodigoIMDBInvalido();
	testDuracionInvalida();
	testComparacionOrdenNatural();

	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

