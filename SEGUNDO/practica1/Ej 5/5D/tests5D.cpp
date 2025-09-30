#include <iostream>
#include "cabecera.h"

using namespace std;

void testPeliculasDirector() {
	CatalogoPeliculas c(1, "Test");
	c.addPelicula(Pelicula("A&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("B&X&tt0000002&110&15"));
	c.addPelicula(Pelicula("C&Y&tt0000003&120&20"));

	map<string, list<string>> res = c.peliculasDirector();
	bool ok = res["X"].size() == 2 && res["Y"].size() == 1;
	cout << (ok ? "[OK] " : "[FAILED] ") << "peliculasDirector()" << endl;
}

void testDuracionDirector() {
	CatalogoPeliculas c(2, "Test");
	c.addPelicula(Pelicula("A&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("B&X&tt0000002&110&15"));
	map<string, int> r = c.duracionDirector();
	cout << ((r["X"] == 210) ? "[OK] " : "[FAILED] ") << "duracionDirector()" << endl;
}

void testPresupuestoDirector() {
	CatalogoPeliculas c(3, "Test");
	c.addPelicula(Pelicula("A&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("B&X&tt0000002&110&15"));
	map<string, double> r = c.presupuestoDirector();
	cout << ((r["X"] == 25) ? "[OK] " : "[FAILED] ") << "presupuestoDirector()" << endl;
}

void testPeliculasMasDuracion() {
	CatalogoPeliculas c(4, "Test");
	c.addPelicula(Pelicula("A&X&tt0000001&150&10"));
	c.addPelicula(Pelicula("B&Y&tt0000002&150&20"));
	list<Pelicula> r = c.peliculasMasDuracion();
	cout << ((r.size() == 2) ? "[OK] " : "[FAILED] ") << "peliculasMasDuracion()" << endl;
}

void testDirectoresMenorPeliculas() {
	CatalogoPeliculas c(5, "Test");
	c.addPelicula(Pelicula("A&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("B&X&tt0000002&100&15"));
	c.addPelicula(Pelicula("C&Y&tt0000003&100&20"));
	list<string> r = c.directoresMenorPeliculas();
	bool correcto = (r.size() == 1 && r.front() == "Y");
	cout << (correcto ? "[OK] " : "[FAILED] ") << "directoresMenorPeliculas()" << endl;
}

int main() {
	cout << "--- TESTS NUEVAS FUNCIONES CATALOGO ---" << endl;
	testPeliculasDirector();
	testDuracionDirector();
	testPresupuestoDirector();
	testPeliculasMasDuracion();
	testDirectoresMenorPeliculas();
	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

