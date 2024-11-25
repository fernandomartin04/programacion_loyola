#include <iostream>
#include <cmath>
using namespace std;
#define DIM 100

int main() {
    double suma = 0, media, varianza = 0, dif;
    int n, p;
    int v[DIM];

    // Bucle para verificar que no sea negativo ni mayor que DIM
    do {
        cout << "Introduzca el numero de elementos del vector" << endl;    
        cin >> n;
    } while(n < 0 || n > DIM);

    // Solicito el primer valor y asignar inicialización a maximo y minimo
    cout << "Introduce el valor 0 del vector: " << endl; 
    cin >> p;
    v[0] = p;
    suma = p;
    int maximo = p;
    int minimo = p;

    // Llenar el resto del vector y calcular suma, máximo y mínimo
    for (int i = 1; i < n; i++) {
        cout << "Introduce el valor " << i << " del vector: " << endl; 
        cin >> p;
        v[i] = p;

        suma += v[i];

        // Actualizar máximo y mínimo
        if (v[i] > maximo) {
            maximo = v[i];
        }
        if (v[i] < minimo) {
            minimo = v[i];
        }
    }

    // Calcular la media
    media = suma / n;

    // Imprimir todos los elementos del vector
    cout << "Elementos del vector:" << endl;
    for (int h = 0; h < n; h++) {
        cout << " " << v[h] << endl;
    }

    cout << "El numero maximo del vector es: " << maximo << endl;
    cout << "El numero minimo del vector es: " << minimo << endl;
    cout << "Suma de los elementos del vector: " << suma << endl;
    cout << "La media de los elementos del vector es de: " << media << endl;

    // Calcular la varianza
    for (int j = 0; j < n; j++) {
        dif = pow((v[j] - media), 2);
        varianza += dif;
    }

    cout << "La varianza es: " << varianza / n << endl;
    return 0;
}

