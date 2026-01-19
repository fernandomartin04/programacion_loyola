#include <iostream>
using namespace std;

// Función DyV
int funcion(int *v, int i, int n) {
    if (n == 1) {
        if (v[i] % 2 == 0) return 1;
        else return 0;
    }
    else {
        int izq = funcion(v, i, n/2);
        int der = funcion(v, i + n/2, n/2);

        if (izq != -1 && der != -1 && der == izq)
            return izq + der;
        else
            return -1;
    }
}

int main() {

    // ✔ Caso que CUMPLE la propiedad
    // Izq: [2, 3] -> 1 par
    // Der: [4, 6] -> 2 pares
    int v1[] = {1, 2, 3, 4};

    // ❌ Caso que NO cumple la propiedad
    // Izq: [2, 4] -> 2 pares
    // Der: [6, 3] -> 1 par
    int v2[] = {2, 1, 6, 3};

    cout << "Caso 1: ";
    int r1 = funcion(v1, 0, 4);
    if (r1 != -1)
        cout << "CUMPLE, pares = " << r1 << endl;
    else
        cout << "NO cumple" << endl;

    cout << "Caso 2: ";
    int r2 = funcion(v2, 0, 4);
    if (r2 != -1)
        cout << "CUMPLE, pares = " << r2 << endl;
    else
        cout << "NO cumple" << endl;

    return 0;
}
