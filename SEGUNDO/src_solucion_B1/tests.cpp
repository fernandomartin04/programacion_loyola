#include <iostream>
#include <cassert>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include "cabecera.h"

using namespace std;

void testConstructoresYMetodos() {
    Instituto i1("IES Galileo", "Sevilla", 300, 25);

    // Observadores
    bool test1 = i1.getNombre() == "IES Galileo";
    bool test2 = i1.getCiudad() == "Sevilla";
    bool test3 = i1.getNumeroAlumnos() == 300;
    bool test4 = i1.getNumeroProfesores() == 25;

    // Modificadores
    i1.setNumeroAlumnos(350);
    i1.setNumeroProfesores(30);
    bool test5 = i1.getNumeroAlumnos() == 350;
    bool test6 = i1.getNumeroProfesores() == 30;

    // Asignación
    Instituto i2 = i1;
    bool test7 = i2.getNombre() == "IES Galileo" && i2.getCiudad() == "Sevilla";

    // Show (solo prueba visual, no programática)
    cout << "[INFO] Salida esperada de show(): (IES Galileo, Sevilla, 350, 30)" << endl;
    cout << "[INFO] Salida obtenida: ";
    i1.show();

    cout << "[ " << (test1 && test2 && test3 && test4 && test5 && test6 && test7 ? "OK" : "FAILED") << " ] Constructores, observadores, modificadores, operador =" << endl;
}

void testFuncionesExternas() {
    set<Instituto> institutos;
    institutos.insert(Instituto("IES Galileo", "Sevilla", 300, 25));
    institutos.insert(Instituto("IES Cervantes", "Madrid", 500, 30));
    institutos.insert(Instituto("IES Picasso", "Sevilla", 200, 18));
    institutos.insert(Instituto("IES Machado", "Granada", 400, 30));
    institutos.insert(Instituto("IES Lorca", "Granada", 100, 10));

    // b) Relación ciudad -> institutos
    map<string, list<Instituto>> m1 = getCiudadProfesores(institutos);
    bool test1 = m1["Sevilla"].size() == 2 && m1["Madrid"].size() == 1 && m1["Granada"].size() == 2;
    cout << "[ " << (test1 ? "OK" : "FAILED") << " ] getCiudadProfesores" << endl;

    // c) Instituto(s) con más profesores
    list<Instituto> m2 = getInstitutoMayorProfesores(institutos);
    bool test2 = m2.size() == 2;
    cout << "[ " << (test2 ? "OK" : "FAILED") << " ] getInstitutoMayorProfesores" << endl;

    // d) Ratio ciudad -> alumnos/profesores
    map<string, float> m3 = getCiudadRatio(institutos);
    bool test3 =
        abs(m3["Sevilla"] - (500.0 / 43)) < 0.001 &&
        abs(m3["Madrid"] - (500.0 / 30)) < 0.001 &&
        abs(m3["Granada"] - (500.0 / 40)) < 0.001;

    cout << "[ " << (test3 ? "OK" : "FAILED") << " ] getCiudadRatio" << endl;
}

int main() {
    cout << "=== TESTS CLASE INSTITUTO ===" << endl;
    testConstructoresYMetodos();

    cout << "\n=== TESTS FUNCIONES EXTERNAS ===" << endl;
    testFuncionesExternas();

    return 0;
}

