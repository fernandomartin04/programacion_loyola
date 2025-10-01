#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

const double EPS = 1e-6;

// Template genérico para comparar cualquier tipo numérico
template<typename T1, typename T2>
void assertValueEqual(T1 val, T2 expected, const string& testName) {
    if (fabs(val - expected) < EPS) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado " << expected << ", obtenido " << val << endl;
    }
}

// Especialización para comparar ints
template<>
void assertValueEqual<int, int>(int val, int expected, const string& testName) {
    if (val == expected) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado " << expected << ", obtenido " << val << endl;
    }
}

int main() {
    cout << "=== TESTS Punto2D<float> ===" << endl;
    Punto2D<float> pf(3.0f, 4.0f);
    assertValueEqual(pf.getX(), 3.0f, "Get X float");
    assertValueEqual(pf.getY(), 4.0f, "Get Y float");
    assertValueEqual(pf.distancia(), 5.0, "Distancia float");

    pf.setX(6.0f); pf.setY(8.0f);
    assertValueEqual(pf.getX(), 6.0f, "Set X float");
    assertValueEqual(pf.getY(), 8.0f, "Set Y float");
    assertValueEqual(pf.distancia(), 10.0, "Distancia float modificado");

    cout << "=== TESTS Punto2D<int> ===" << endl;
    Punto2D<int> pi(3, 4);
    assertValueEqual(pi.getX(), 3, "Get X int");
    assertValueEqual(pi.getY(), 4, "Get Y int");
    assertValueEqual(pi.distancia(), 5, "Distancia int");

    pi.setX(6); pi.setY(8);
    assertValueEqual(pi.getX(), 6, "Set X int");
    assertValueEqual(pi.getY(), 8, "Set Y int");
    assertValueEqual(pi.distancia(), 10, "Distancia int modificado");

    cout << "=== FIN TESTS ===" << endl;
    return 0;
}
