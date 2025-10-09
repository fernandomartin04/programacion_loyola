#include <iostream>
#include <set>
#include <string>
#include "cabecera.h"

using namespace std;

bool setsIguales(const set<string>& a, const set<string>& b) {
    return a == b;
}

void assertSetEqual(const set<string>& actual, const set<string>& esperado, const string& testName) {
    if (setsIguales(actual, esperado)) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAILED] " << testName << "\n  Esperado: [ ";
        for (const auto& s : esperado) cout << s << " ";
        cout << "]\n  Obtenido: [ ";
        for (const auto& s : actual) cout << s << " ";
        cout << "]\n";
    }
}

int main() {
    cout << "=== TEST FUNCIONES CON SET<string> ===" << endl;
    set<string> c1 = {"Ana", "Alba", "Eva", "Carlos", "Luis", "Ana"};
    set<string> c2 = {"Eva", "Oscar", "Luis", "Miguel", "Ian", "Eva"};

    eliminarMenos4Caracteres(c1);
    eliminarMenos4Caracteres(c2);

    assertSetEqual(c1, {"Alba", "Carlos", "Luis"}, "Eliminar < 4 caracteres - C1");
    assertSetEqual(c2, {"Oscar", "Luis", "Miguel"}, "Eliminar < 4 caracteres - C2");

    assertSetEqual(interseccion(c1, c2), {"Luis"}, "Intersección");
    assertSetEqual(diferencia(c1, c2), {"Alba", "Carlos"}, "Diferencia (C1 - C2)");

    set<string> esperadasVocales = {"Alba", "Oscar"};
    set<string> vocalesTotal = vocales(c1);
    set<string> vocales2 = vocales(c2);
    vocalesTotal.insert(vocales2.begin(), vocales2.end());
    assertSetEqual(vocalesTotal, esperadasVocales, "Nombres que empiezan por vocal (combinado)");
    cout << "=== FIN TEST ===" << endl;
    return 0;
}

