#include <iostream>
using namespace std;
#define DIM 100

int main() {
	int matriz[DIM][DIM];
	int f, c, elemento, encontrado = 0, p;


	cout << "Introduce el número de filas: ";
	cin >> f;
	cout << "Introduce el número de columnas: ";
	cin >> c;


	if (f > DIM || c > DIM) {
		cout << "ERROR, el tamaño excede el máximo permitido." << endl;
		return 1; // Salgo del programa
	}


	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << "Introduce el valor para la posición " << i << j << " de la matriz" << endl;
			cin >> p;
			matriz[i][j] = p;
				
		}
		cout << endl;
	}

	// Solicito el elemento pa buscar
	cout << "Introduce el elemento que deseas buscar: ";
	cin >> elemento;

	// Buscar el elemento en la matriz
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			if (matriz[i][j] == elemento) {
				cout << "Elemento encontrado en la fila " << i << " y columna " << j << "." << endl;
			        encontrado = 1;
		        break; // Salir del bucle interno
			}
		}
		if (encontrado) {
			break; // Salir del bucle externo si se encontró el elemento
		}
	}

	    // Si no se encontró el elemento
	if (!encontrado) {
		cout << "Elemento no encontrado en la matriz. Posición: -1, -1" << endl;
	}

	return 0;
	    
}

