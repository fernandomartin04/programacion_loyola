#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void assertTiempoEqual(const Tiempo& t, int h, int m, const string& testName) {
    Tiempo tn = t;
    tn.normalizar();
    if (tn.getHoras() == h && tn.getMinutos() == m) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado " 
             << h << ":" << (m < 10 ? "0" : "") << m << ", pero se obtuvo " 
             << tn.getHoras() << ":" << (tn.getMinutos() < 10 ? "0" : "") << tn.getMinutos() << endl;
    }
}

int main() {
    cout << "=== TESTS CLASE TIEMPO ===" << endl;

    Tiempo t1(1, 75); // debe ser 2:15
    assertTiempoEqual(t1, 2, 15, "Constructor + normalización");

    Tiempo t2(0, 50);
    assertTiempoEqual(t2, 0, 50, "Constructor simple");

    Tiempo suma = t1 + t2; // 2:15 + 0:50 = 3:05
    assertTiempoEqual(suma, 3, 5, "Suma de tiempos");

    Tiempo resta = t1 - t2; // 2:15 - 0:50 = 1:25
    assertTiempoEqual(resta, 1, 25, "Resta de tiempos");

    if (t1 == t1) {
        cout << "[OK] Comparación de igualdad verdadera" << endl;
    } else {
        cout << "[FAIL] Comparación de igualdad verdadera" << endl;
    }

    if (!(t1 == t2)) {
        cout << "[OK] Comparación de desigualdad" << endl;
    } else {
        cout << "[FAIL] Comparación de desigualdad" << endl;
    }

    cout << "=== FIN TESTS ===" << endl;
    return 0;
}

