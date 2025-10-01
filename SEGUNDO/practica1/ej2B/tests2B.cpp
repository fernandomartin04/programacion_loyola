#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

const double EPS = 1e-6;

template<typename T1, typename T2>
void assertEqual(T1 val, T2 expected, const string& msg) {
    if (fabs(val - expected) < EPS) {
        cout << "[OK] " << msg << endl;
    } else {
        cout << "[FAIL] " << msg << ": esperado " << expected << ", obtenido " << val << endl;
    }
}

template<>
void assertEqual<int, int>(int val, int expected, const string& msg) {
    if (val == expected) {
        cout << "[OK] " << msg << endl;
    } else {
        cout << "[FAIL] " << msg << ": esperado " << expected << ", obtenido " << val << endl;
    }
}

int main() {
    cout << "=== TEST Vector3D<float> ===" << endl;
    Vector3D<float> vf(1.0f, 2.0f, 2.0f);
    assertEqual(vf.modulo(), 3.0, "Módulo float");
    assertEqual(vf.productoEscalar(Vector3D<float>(1.0f, 1.0f, 1.0f)), 5.0f, "Producto escalar float");

    cout << "=== TEST Vector3D<int> ===" << endl;
    Vector3D<int> vi(3, 4, 0);
    assertEqual(vi.modulo(), 5.0, "Módulo int");
    assertEqual(vi.productoEscalar(Vector3D<int>(1, 0, 0)), 3, "Producto escalar int");

    return 0;
}

