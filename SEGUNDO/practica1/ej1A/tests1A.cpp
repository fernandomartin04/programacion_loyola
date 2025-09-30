#include <iostream>
#include <string>
#include "ej1a.h"

using namespace std;

void assertEqual(const Fraccion& f, int numerador, int denominador, const string& testName) {
    if (f.getNumerador() == numerador && f.getDenominador() == denominador) {
        cout << "[OK] " << testName << endl;
    } else {
        cout << "[FAIL] " << testName << ": esperado " 
             << numerador << "/" << denominador << ", pero se obtuvo " 
             << f.getNumerador() << "/" << f.getDenominador() << endl;
    }
}

int main() {
    cout << "=== INICIO DE TESTS PARA LA CLASE FRACCION ===" << endl;

    // Test 1: Constructor y getters
    Fraccion f1(2, 4);
    assertEqual(f1, 2, 4, "Constructor y Getters");

    // Test 2: Simplificar fracción
    f1.simplificar();
    assertEqual(f1, 1, 2, "Simplificación de 2/4");

    // Test 3: Setters
    f1.setNumerador(6);
    f1.setDenominador(9);
    assertEqual(f1, 6, 9, "Setters funcionando");

    // Test 4: Simplificar otra fracción
    f1.simplificar();
    assertEqual(f1, 2, 3, "Simplificación de 6/9");

    // Test 5: Suma de fracciones
    Fraccion f2(1, 6);      // 1/6
    Fraccion suma = f1 + f2; // 2/3 + 1/6 = 5/6
    assertEqual(suma, 5, 6, "Suma de 2/3 + 1/6");

    // Test 6: Operador <<
    cout << "[TEST MANUAL] Debe mostrar: 5/6" << endl;
    cout << "Resultado del operador <<: " << suma << endl;

    cout << "=== FIN DE TESTS ===" << endl;
    return 0;
}

