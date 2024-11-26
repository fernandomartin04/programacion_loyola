#include<iostream>
#include"cabecera.h"
using namespace std;


int main() {
    int matriz[DIM][DIM];
    int f, c, fila1, fila2;

    cout << "Introduce el número de filas: ";
    cin >> f;
    cout << "Introduce el número de columnas: ";
    cin >> c;

    // Llenar la matriz con datos
    leer(matriz, f, c);

    // Mostrar la matriz inicial
    cout << "Así queda la matriz sin intercambiar nada: " << endl;
    mostrar(matriz, f, c);

    cout << endl << "¡Ahora puedes invertir dos filas!" << endl;

    // Validar y leer las filas a intercambiar
    do {
        cout << "Selecciona correctamente las filas (números entre 0 y " << f - 1 << "):" << endl;
        cout << "Introduce el número de la primera fila: ";
        cin >> fila1;
        cout << "Introduce el número de la segunda fila: ";
        cin >> fila2;
    } while (fila1 >= f || fila2 >= f || fila1 < 0 || fila2 < 0);

    // Intercambiar las filas
    intercambiar(matriz, f, c, fila1, fila2);

    // Mostrar la matriz final
    cout << "Y así quedan intercambiadas las filas seleccionadas: " << endl;
    mostrar(matriz, f, c);

    return 0;
}

