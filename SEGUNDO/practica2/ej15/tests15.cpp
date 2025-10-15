#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void test(string entrada, string esperado) {
    string r1 = funcionNoFinal(entrada);
    string r2 = funcionFinal(entrada);
    string r3 = funcionIterativa(entrada);

    cout << "Probando con: \"" << entrada << "\" -> esperado: \"" << esperado << "\"" << endl;

    cout << "funcionNoFinal:    " << r1 << "   [" << (r1 == esperado ? "OK" : "FAILED") << "]" << endl;
    cout << "funcionFinal:      " << r2 << "   [" << (r2 == esperado ? "OK" : "FAILED") << "]" << endl;
    cout << "funcionIterativa:  " << r3 << "   [" << (r3 == esperado ? "OK" : "FAILED") << "]" << endl;
    cout << "--------------------------------------------------" << endl;
}

int main() {
    test("antonio", "oinonio");
    test("casa", "assa");
    test("po", "oo");
    test("x", "x");
    test("", "");

    return 0;
}

