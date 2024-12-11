#include "cabecera.h"
using namespace std;

int main() {
	// Declaración de variables
	int filas, columnas, dias;
	Celda region[MAX_FILAS][MAX_COLUMNAS];

	// Pedir al usuario las dimensiones de la región
	pedirDimensiones(filas, columnas);

	// Inicializar la región con valores aleatorios
	inicializarRegion(region, filas, columnas);

	// Mostrar los valores de la región (opcional, para pruebas)
	mostrarRegion(region, filas, columnas);

	do {
        	cout << "Introduce el número de días para la simulación (1 a 30): ";
	        cin >> dias;
	} while (dias < 1 || dias > 30);

	Celda nuevaRegion[MAX_FILAS][MAX_COLUMNAS];

Celda nuevaRegion[MAX_FILAS][MAX_COLUMNAS];

    for (int dia = 1; dia <= dias; ++dia) {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                char tipo = 'I'; // Por defecto, celda interna

                // Determinar el tipo de celda
                if ((i == 0 && j == 0) || (i == 0 && j == columnas - 1) || 
                    (i == filas - 1 && j == 0) || (i == filas - 1 && j == columnas - 1)) {
                    tipo = 'C'; // Esquina
                } else if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1) {
                    tipo = 'B'; // Borde
                }

                // Actualizar las condiciones de la celda
                nuevaRegion[i][j].temperatura = calcularPromedioVecinos(region, filas, columnas, i, j, tipo);
                if (nuevaRegion[i][j].temperatura > 30) {
                    nuevaRegion[i][j].humedad = max(0, region[i][j].humedad - 5);
                } else if (nuevaRegion[i][j].temperatura < 0) {
                    nuevaRegion[i][j].humedad = min(100, region[i][j].humedad + 3);
                } else {
                    nuevaRegion[i][j].humedad = min(100, max(0, region[i][j].humedad + (rand() % 5 - 2)));
                }

                nuevaRegion[i][j].viento = max(0, min(100, calcularPromedioVecinos(region, filas, columnas, i, j, tipo) + (rand() % 21 - 10)));
            }
        }

        // Actualizar región
        copiarRegion(nuevaRegion, region, filas, columnas);
    }

    // Mostrar la región final
    cout << "Estado final de la región después de " << dias << " días:" << endl;
    mostrarRegion(region, filas, columnas);



	return 0;
}

