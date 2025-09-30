#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

const double EPS = 1e-6;

template<typename T1, typename T2>
void assertEqual(T1 val, T2 expected, const string& msg) {
    if (fabs(val - expected) < EPS)
        cout << "[OK] " << msg << endl;
    else
        cout << "[FAIL] " << msg << ": esperado " << expected << ", obtenido " << val << endl;
}

template<>
void assertEqual<int, int>(int val, int expected, const string& msg) {
    if (val == expected)
        cout << "[OK] " << msg << endl;
    else
        cout << "[FAIL] " << msg << ": esperado " << expected << ", obtenido " << val << endl;
}

int main() {
    cout << "=== TEST Punto4D<float> ===" << endl;
    Punto4D<float> pf(1.0f, 2.0f, 3.0f, 4.0f);
    assertEqual(pf.getX(), 1.0f, "GetX float");
    assertEqual(pf.modulo(), sqrt(30.0), "Módulo float");

    cout << "=== TEST Punto4D<int> ===" << endl;
    Punto4D<int> pi(1, 2, 2, 1); // módulo = sqrt(1+4+4+1) = sqrt(10)
    assertEqual(pi.modulo(), sqrt(10.0), "Módulo int");

    Punto4D<int> pi2(1, 2, 2, 1);
    if (pi == pi2)
        cout << "[OK] Comparación de igualdad int" << endl;
    else
        cout << "[FAIL] Comparación de igualdad int" << endl;

    return 0;
}

