#include <iostream>
#include <string>
#include "cabecera.h"
using namespace std;

int** crearMatriz(int n) {
    int** m = new int*[n];
    for (int i = 0; i < n; i++)
        m[i] = new int[n];
    return m;
}

void liberarMatriz(int** m, int n) {
    for (int i = 0; i < n; i++)
        delete[] m[i];
    delete[] m;
}

void rellenarMatriz(int** m, int valores[], int n) {
    for (int i = 0; i < n * n; i++)
        m[i / n][i % n] = valores[i];
}

void testFiltro(int** m, int n, bool esperado, string nombre) {
    bool resultado = filtro(m, n);
    if (resultado == esperado)
        cout << "[OK] " << nombre << endl;
    else
        cout << "[FAILED] " << nombre << " (esperado: " << esperado << ", obtenido: " << resultado << ")" << endl;
}

int main() {
    const int n = 4;

    int datos1[] = {
        1,  2, 10, 14,
        5,  8, 15, 19,
        20, 25, 55, 70,
        40, 43, 71, 84
    }; // true

    int datos2[] = {
        1,  2, 10, 14,
        5,  8, 15, 19,
        20, 25, 55, 70,
        40, 43, 71, 10
    }; // false

    int datos3[] = {
        2, 3, 5, 6,
        7, 8, 10, 12,
        13, 15, 18, 20,
        21, 23, 25, 30
    }; // true

    int datos4[] = {
        5, 6, 7, 8,
        10, 11, 12, 13,
        14, 15, 16, 17,
        1, 2, 3, 4
    }; // false

    int datos5[] = {
        10, 11, 12, 13,
        14, 15, 16, 17,
        18, 19, 20, 21,
        22, 23, 24, 25
    }; // true

    int* valores[] = {datos1, datos2, datos3, datos4, datos5};
    bool esperados[] = {true, false, true, false, true};
    string nombres[] = {
        "Matriz 1 (válida)",
        "Matriz 2 (inválida)",
        "Matriz 3 (válida)",
        "Matriz 4 (inválida)",
        "Matriz 5 (válida)"
    };

    for (int i = 0; i < 5; i++) {
        int** m = crearMatriz(n);
        rellenarMatriz(m, valores[i], n);
        testFiltro(m, n, esperados[i], nombres[i]);
        liberarMatriz(m, n);
    }

    return 0;
}

