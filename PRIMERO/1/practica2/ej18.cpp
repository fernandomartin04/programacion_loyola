#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    float producto = 1.0;
    float contador = 0.0;
    char continuar;

    // Pido números al usuario
    do {
        cout << "Introduce un número real: ";
        cin >> numero;

        suma += numero; // Agregar el número a la suma
        producto *= numero; // Multiplicar el número al producto
        contador++; // Incrementar el contador

        cout << "¿Quieres introducir otro número? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');


    if (suma > 0) {
        // Calculo la media aritmética
        float mediaAritmetica = suma / contador;

        // Calculo la media geométrica
        float mediaGeometrica = pow(producto, 1.0 / contador);

        // Muestro resultado
        cout << "La media aritmética es: " << mediaAritmetica << endl;
        cout << "La media geométrica es: " << mediaGeometrica << endl;
    } else {
        cout << "No se ingresaron números." << endl;
    }

    return 0;
}


