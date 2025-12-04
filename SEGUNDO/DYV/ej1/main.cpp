#include <iostream>
#include "cabecera.h"
using namespace std;

int main() {

    // PRUEBA 1: tiene coincidencia en 0
    int v1[] = {0, 2, 5, 7, 10};
    int n1 = 5;
    cout << "Prueba 1 → resultado: " << fun(v1, n1) << endl; 
    // Esperado: 0


    // PRUEBA 2: tiene coincidencia en 3
    int v2[] = {-3, -1, 1, 3, 10};
    int n2 = 5;
    cout << "Prueba 2 → resultado: " << fun(v2, n2) << endl; 
    // Esperado: 3


    // PRUEBA 3: NO tiene coincidencias
    int v3[] = {-5, -3, -1, 2, 4};
    int n3 = 5;
    cout << "Prueba 3 → resultado: " << fun(v3, n3) << endl; 
    // Esperado: -1


    // PRUEBA 4: coincidencia en mitad exacta
    int v4[] = {-2, 0, 2, 5, 9};
    int n4 = 5;
    cout << "Prueba 4 → resultado: " << fun(v4, n4) << endl;
    // Esperado: 2


    // PRUEBA 5: coincidencia al final
    int v5[] = {-3, -2, -1, 3};
    int n5 = 4;
    cout << "Prueba 5 → resultado: " << fun(v5, n5) << endl;
    // Esperado: 3

    return 0;
}
