#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

const double EPS = 1e-6;

void assertComplejoEqual(const Complejo& c, double r, double i, const string& testName) {
    if (fabs(c.getReal() - r) < EPS && fabs(c.getImaginario() - i) < EPS) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado (" 
             << r << "," << i << "), pero se obtuvo (" 
             << c.getReal() << "," << c.getImaginario() << ")" << endl;
    }
}

void assertDoubleEqual(double a, double b, const string& testName) {
    if (fabs(a - b) < EPS) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado " 
             << b << ", pero se obtuvo " << a << endl;
    }
}

int main() {
    cout << "=== TESTS PARA CLASE COMPLEJO ===" << endl;

    Complejo c1(3, 4); // módulo = 5
    Complejo c2(1, -2);

    assertComplejoEqual(c1, 3, 4, "Constructor básico");
    assertComplejoEqual(c2, 1, -2, "Constructor con negativos");

    Complejo suma = c1 + c2; // (4, 2)
    assertComplejoEqual(suma, 4, 2, "Suma de complejos");

    Complejo resta = c1 - c2; // (2, 6)
    assertComplejoEqual(resta, 2, 6, "Resta de complejos");

    Complejo prod = c1 * c2; // (3*1 - 4*-2, 3*-2 + 4*1) = (3 + 8, -6 + 4) = (11, -2)
    assertComplejoEqual(prod, 11, -2, "Multiplicación de complejos");

    assertDoubleEqual(c1.getModulo(), 5.0, "Módulo de (3,4)");

    if (c1 == c1) {
        cout << "[OK] Comparación de igualdad verdadera" << endl;
    } else {
        cout << "[FAIL] Comparación de igualdad verdadera" << endl;
    }

    if (!(c1 == c2)) {
        cout << "[OK] Comparación de desigualdad" << endl;
    } else {
        cout << "[FAIL] Comparación de desigualdad" << endl;
    }

    cout << "=== FIN DE TESTS ===" << endl;
    return 0;
}

