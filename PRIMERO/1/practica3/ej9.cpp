#include <iostream>
using namespace std;

struct matriz {
	int nFil;
	int nCol;
	int m[100][100];
};

int main() {
	matriz mat;

	// Solicitar al usuario las dimensiones de la matriz
	cout << "Introduce el número de filas: ";
	cin >> mat.nFil;
	cout << "Introduce el número de columnas: ";
	cin >> mat.nCol;

	// Comprobar si la matriz es cuadrada
	if (mat.nFil != mat.nCol) {
	        cout << "La matriz no es cuadrada. No se puede realizar la operación." << endl;
	        return 1;
	}

	// Leer la matriz
	cout << "Introduce los elementos de la matriz: " << endl;
	for (int i = 0; i < mat.nFil; i++) {
		for (int j = 0; j < mat.nCol; j++) {
			cout << "Elemento en la posición [" << i << "][" << j << "]: ";
			cin >> mat.m[i][j];
        	}
    	}

    	// Mostrar la matriz
    	cout << "Matriz ingresada: " << endl;
    	for (int i = 0; i < mat.nFil; i++) {
        	for (int j = 0; j < mat.nCol; j++) {
            		cout << mat.m[i][j] << " ";
        	}
        	cout << endl;
    	}

    	// Calcular la suma de los elementos por debajo de la diagonal principal
    	int suma = 0;
    	for (int i = 1; i < mat.nFil; i++) { // Empieza en 1 para evitar la diagonal
        	for (int j = 0; j < i; j++) {    // Solo elementos donde j < i
            		suma += mat.m[i][j];
        	}
    	}

    	// Mostrar la suma
    	cout << "La suma de los elementos por debajo de la diagonal principal es: " << suma << endl;

    return 0;
}

