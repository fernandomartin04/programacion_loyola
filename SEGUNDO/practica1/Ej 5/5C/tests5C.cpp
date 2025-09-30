#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void testDuracionMinima() {
	CatalogoPeliculas c(1, "Admin");
	c.addPelicula(Pelicula("P1&D1&tt0000001&120&10"));
	c.addPelicula(Pelicula("P2&D2&tt0000002&160&12"));
	c.addPelicula(Pelicula("P3&D3&tt0000003&200&15"));

	set<Pelicula> r = c.duracionMinima(150);
	cout << (r.size() == 1 ? "[OK] " : "[FAILED] ") << "Duración mínima >= 150" << endl;
}

void testPeliculasPresupuestoInferior() {
	CatalogoPeliculas c(2, "Admin");
	c.addPelicula(Pelicula("P1&D1&tt0000001&120&10"));
	c.addPelicula(Pelicula("P2&D2&tt0000002&160&20"));
	c.addPelicula(Pelicula("P3&D3&tt0000003&200&30"));

	int r = c.peliculasPresupuestoInferior(25);
	cout << (r == 2 ? "[OK] " : "[FAILED] ") << "Presupuesto inferior a 25" << endl;
}

void testPresupuestoMedioDirector() {
	CatalogoPeliculas c(3, "Admin");
	c.addPelicula(Pelicula("P1&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("P2&X&tt0000002&100&30"));
	c.addPelicula(Pelicula("P3&Y&tt0000003&100&50"));

	double r = c.presupuestoMedioDirector("X");
	cout << (r == 20 ? "[OK] " : "[FAILED] ") << "Presupuesto medio director X" << endl;
}

void testPeliculaMasLargaDirector() {
	CatalogoPeliculas c(4, "Admin");
	c.addPelicula(Pelicula("P1&A&tt0000001&120&10"));
	c.addPelicula(Pelicula("P2&A&tt0000002&180&10"));
	Pelicula p = c.peliculaMasLargaDirector("A");
	cout << ((p.getDuracion() == 180) ? "[OK] " : "[FAILED] ") << "Película más larga de A" << endl;
}

void testDuracionMedia() {
	CatalogoPeliculas c(5, "Admin");
	c.addPelicula(Pelicula("P1&A&tt0000001&100&10"));
	c.addPelicula(Pelicula("P2&B&tt0000002&200&20"));

	double r = c.duracionMedia();
	cout << (r == 150 ? "[OK] " : "[FAILED] ") << "Duración media" << endl;
}

void testPresupuestoMedioCodigo() {
	CatalogoPeliculas c(6, "Admin");
	c.addPelicula(Pelicula("P1&X&tt0000001&100&10"));
	c.addPelicula(Pelicula("P2&X&tt0000003&100&30"));

	double r = c.presupuestoMedioCodigo("tt0000003");
	cout << (r == 10 ? "[OK] " : "[FAILED] ") << "Presupuesto medio < tt0000003" << endl;
}

void testIncrementoPresupuesto() {
	CatalogoPeliculas c(7, "Admin");
	c.addPelicula(Pelicula("P1&X&tt0000001&100&10"));
	c.incremento(10, 15); // +10% si < 15

	Pelicula p = *(c.getPeliculas().begin());
	cout << (p.getPresupuesto() == 11 ? "[OK] " : "[FAILED] ") << "Incremento del 10% presupuesto < 15" << endl;
}

int main() {
	cout << "--- TESTS CatalogoPeliculas ---" << endl;
	testDuracionMinima();
	testPeliculasPresupuestoInferior();
	testPresupuestoMedioDirector();
	testPeliculaMasLargaDirector();
	testDuracionMedia();
	testPresupuestoMedioCodigo();
	testIncrementoPresupuesto();
	cout << "--- FIN TESTS ---" << endl;
	return 0;
}

