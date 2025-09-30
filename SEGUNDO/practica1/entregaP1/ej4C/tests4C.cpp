#include <iostream>
#include <map>
#include <list>
#include <string>
#include "cabecera.h"

using namespace std;

bool mapsIguales(const map<string, int>& a, const map<string, int>& b) {
    return a == b;
}

bool mapListIguales(const map<int, list<string> >& a, const map<int, list<string> >& b) {
    return a == b;
}

bool listasIguales(list<string> a, list<string> b) {
    a.sort(); b.sort();
    return a == b;
}

void assertMapEqual(const map<string, int>& actual, const map<string, int>& esperado, const string& nombre) {
    if (mapsIguales(actual, esperado))
        cout << "[OK] " << nombre << endl;
    else
        cout << "[FAILED] " << nombre << endl;
}

void assertListEqual(const list<string>& actual, const list<string>& esperado, const string& nombre) {
    if (listasIguales(actual, esperado))
        cout << "[OK] " << nombre << endl;
    else
        cout << "[FAILED] " << nombre << endl;
}

void assertMapListEqual(const map<int, list<string> >& actual, const map<int, list<string> >& esperado, const string& nombre) {
    if (mapListIguales(actual, esperado))
        cout << "[OK] " << nombre << endl;
    else
        cout << "[FAILED] " << nombre << endl;
}

int main() {
    cout << "=== TEST FUNCIONES GESTIÓN DE PERSONAS ===" << endl;
    map<string, int> personas;
    personas["Ana"] = 17;
    personas["Luis"] = 19;
    personas["Marta"] = 23;
    personas["Carlos"] = 18;
    personas["Eva"] = 15;

    eliminarPorEdad(personas, 18);
    map<string, int> esperadoFiltrado = {
        {"Luis", 19},
        {"Marta", 23},
        {"Carlos", 18}
    };
    assertMapEqual(personas, esperadoFiltrado, "Eliminar menores de 18");

    map<string, int> esperadoPrimos = {
        {"Luis", 19},
        {"Marta", 23}
    };
    assertMapEqual(primosMap(personas), esperadoPrimos, "Filtrar edades primas");

    list<string> esperadoMaximos = {"Marta"};
    list<string> nombresMax = obtenerNombresEdadMaxima(personas);
    assertListEqual(nombresMax, esperadoMaximos, "Obtener edad máxima");

    map<int, list<string> > esperadoInvertido;
    esperadoInvertido[18].push_back("Carlos");
    esperadoInvertido[19].push_back("Luis");
    esperadoInvertido[23].push_back("Marta");
    assertMapListEqual(invertidoMap(personas), esperadoInvertido, "Mapa invertido por edad");
    cout << "=== FIN TEST ===" << endl;
    return 0;
}

