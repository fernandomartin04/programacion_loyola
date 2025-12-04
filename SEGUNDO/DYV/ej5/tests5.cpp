#include <iostream>
#include <cmath>
#include "cabecera.h"

using namespace std;

bool iguales(float a, float b, float epsilon = 1e-6) {
    return fabs(a - b) < epsilon;
}

void testMatriz(const float valores[][4], float esperado, int N = 4) {
    float** m = new float*[N];
    for (int i = 0; i < N; ++i)
        m[i] = new float[N];
							
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            m[i][j] = valores[i][j];
					
    float resultado = minimoEnTerreno(m, N);

    if (iguales(esperado, resultado))
        cout << "[OK] mínimo = " << resultado << endl;
    else
        cout << "[FAILED] esperado " << esperado << ", obtenido " << resultado << endl;

    for (int i = 0; i < N; ++i)
        delete[] m[i];
    delete[] m;
}

int main() {
    cout << "--- TESTS EXTENDIDOS TERRENO ---" << endl;

    float m1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}  // Mínimo al final
    };
    testMatriz(m1, 0);

    float m2[4][4] = {
        {0, 2, 3, 4},  // Mínimo al principio
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    testMatriz(m2, 0);

    float m3[4][4] = {
        {9, 8, 7, 6},
        {5, 4, 3, 2},
        {6, 5, 4, 3},
        {2, 1, 0, 1}  // Mínimo centrado
    };
    testMatriz(m3, 0);

    float m4[4][4] = {
        {0.1, 0.9, 0.8, 0.7},
        {0.6, 0.5, 0.4, 0.3},
        {0.9, 0.8, 0.2, 0.1},
        {0.9, 0.9, 0.9, 0.9}
    };
    testMatriz(m4, 0.1);

    float m5[4][4] = {
        {5, 5, 5, 5},
        {5, 5, 5, 5},
        {5, 5, 5, 5},
        {5, 5, 5, 5}
    };
    testMatriz(m5, 5);  // Todos iguales

    return 0;
}

