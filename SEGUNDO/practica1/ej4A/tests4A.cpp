#include <iostream>
#include <list>
#include <string>
#include "cabecera.h"

using namespace std;

bool listasIguales(const list<string>& a, const list<string>& b) {
    return a == b;
}

void assertListEqual(const list<string>& actual, const list<string>& esperado, const string& testName) {
    if (listasIguales(actual, esperado)) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAILED] " << testName << ":\n  Esperado: [ ";
        for (const auto& s : esperado) cout << s << " ";
        cout << "]\n  Obtenido: [ ";
        for (const auto& s : actual) cout << s << " ";
        cout << "]\n";
    }
}

int main() {
    cout << "=== TEST UNITARIOS FUNCIONES DE LISTAS ===\n";
    list<string> l1 = {"Ana", "Alba", "Eva", "Carlos", "Luis", "Ana"};
    list<string> l2 = {"Eva", "Oscar", "Luis", "Miguel", "Ian", "Eva"};

    eliminarMenos4Caracteres(l1);
    eliminarMenos4Caracteres(l2);

    list<string> esperadoL1 = {"Alba", "Carlos", "Luis"};
    list<string> esperadoL2 = {"Oscar", "Luis", "Miguel"};
    assertListEqual(l1, esperadoL1, "Eliminar < 4 caracteres - Lista 1");
    assertListEqual(l2, esperadoL2, "Eliminar < 4 caracteres - Lista 2");

    list<string> esperadoInter = {"Luis"};
    assertListEqual(interseccion(l1, l2), esperadoInter, "Intersección");

    list<string> esperadoDiff = {"Alba", "Carlos"};
    assertListEqual(diferencia(l1, l2), esperadoDiff, "Diferencia");

    list<string> esperadoVoc = {"Alba", "Oscar"};
    list<string> voc = vocales(l1);
    list<string> voc2 = vocales(l2);
    voc.insert(voc.end(), voc2.begin(), voc2.end());
    voc.sort();
    voc.unique();
    assertListEqual(voc, esperadoVoc, "Nombres que empiezan por vocal");

    ordenar(l1);
    ordenar(l2);
    list<string> esperadoL1Ord = {"Alba", "Carlos", "Luis"};
    list<string> esperadoL2Ord = {"Luis", "Miguel", "Oscar"};
    assertListEqual(l1, esperadoL1Ord, "Ordenar Lista 1");
    assertListEqual(l2, esperadoL2Ord, "Ordenar Lista 2");
    cout << "=== FIN TEST ===" << endl;
    
    return 0;
}

