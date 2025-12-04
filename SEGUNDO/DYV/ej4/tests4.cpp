#include <iostream>
#include <cassert>
#include "cabecera.h"

using namespace std;

void testMatriz(const int datos[][4], int N, long int esperado, string descripcion) {
    int** m = new int*[N];
    for (int i = 0; i < N; ++i) {
        m[i] = new int[N];
        for (int j = 0; j < N; ++j)
            m[i][j] = datos[i][j];
    }

    long int resultado = equiProducto(m, N);
    if (resultado == esperado)
        cout << "[OK] " << descripcion << endl;
    else
        cout << "[FAILED] " << descripcion << " → Esperado: " << esperado << ", obtenido: " << resultado << endl;

    for (int i = 0; i < N; ++i)
        delete[] m[i];
    delete[] m;
}

int main() {
    cout << "=== TEST MATRIZ EQUIPRODUCTO ===" << endl;

    const int N = 4;

    // Caso 1: Equiprod. (ejemplo original)
    int m1[N][N] = {
        {1, 3, 2, 14},
        {7, 8, 3, 2},
        {4, 6, 2, 2},
        {7, 1, 21, 2}
    };
    testMatriz(m1, N, 796594176, "Caso 1: Matriz equiproducto válida");

    // Caso 2: No equiproducto (una submatriz alterada)
    int m2[N][N] = {
        {1, 3, 2, 14},
        {7, 8, 3, 2},
        {4, 6, 2, 2},
        {7, 1, 99, 2}  // <- cambiado 21 por 99
    };
    testMatriz(m2, N, -1, "Caso 2: No equiproducto (modificación en una submatriz)");

    // Caso 3: Todos unos
    int m3[N][N] = {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    };
    testMatriz(m3, N, 1, "Caso 3: Todos 1 → equiproducto");

    // Caso 4: Matriz con ceros
    int m4[N][N] = {
        {1,1,0,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    };
    testMatriz(m4, N, -1, "Caso 4: No equiproducto por presencia de ceros");

    // Caso 5: Otra válida (manualmente equilibrada)
    int m5[N][N] = {
        {2, 3, 1, 6},
        {3, 2, 2, 3},
        {6, 1, 1, 9},
        {1, 6, 4, 1}
    };
    testMatriz(m5, N, 1679616, "Caso 5: Matriz equiproducto manualmente equilibrada");

    // Caso 6: Otra incorrecta
    int m6[N][N] = {
        {2, 3, 4, 6},
        {3, 2, 2, 3},
        {6, 1, 2, 9},
        {1, 6, 5, 1}  // ← Alterado 6 → 5
    };
    testMatriz(m6, N, -1, "Caso 6: No equiproducto por una diferencia mínima");

    return 0;
}

