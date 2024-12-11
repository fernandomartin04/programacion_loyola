#include "cabecera.h"

// Inicializa la región con valores aleatorios
void inicializarRegion(Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    srand(static_cast<unsigned int>(time(0))); // Semilla para números aleatorios

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            region[i][j].temperatura = rand() % 51 - 10;   // -10 a 40 grados Celsius
            region[i][j].humedad = rand() % 101;           // 0 a 100%
            region[i][j].viento = rand() % 101;            // 0 a 100 km/h
        }
    }
}

// Muestra la región
void mostrarRegion(const Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            SScout << "Celda [" << i << "][" << j << "]: "
                      << "Temperatura: " << region[i][j].temperatura << "°C, "
                      << "Humedad: " << region[i][j].humedad << "%, "
                      << "Velocidad del viento: " << region[i][j].viento << " km/h" << std::endl;
        }
    }
}

// Copia la región origen en la región destino
void copiarRegion(const Celda origen[MAX_FILAS][MAX_COLUMNAS], Celda destino[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            destino[i][j] = origen[i][j];
        }
    }
}

// Calcula el promedio de los valores de las celdas vecinas de una celda específica
int calcularPromedioVecinos(const Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int i, int j, char tipo) {
    int sumTemperatura = 0;
    int count = 0;

    if (tipo == 'I') { // Celda interna (considera todos los vecinos)
        for (int di = -1; di <= 1; ++di) {
            for (int dj = -1; dj <= 1; ++dj) {
                int ni = i + di;
                int nj = j + dj;

                if (ni >= 0 && ni < filas && nj >= 0 && nj < columnas) {
                    sumTemperatura += region[ni][nj].temperatura;
                    ++count;
                }
            }
        }
    } else if (tipo == 'B') { // Celda en el borde
        if (i == 0 || i == filas - 1) { // Filas del borde
            for (int dj = -1; dj <= 1; ++dj) {
                int nj = j + dj;

                if (nj >= 0 && nj < columnas) {
                    sumTemperatura += region[i][nj].temperatura;
                    ++count;
                }
            }
            if (i > 0) {
                sumTemperatura += region[i - 1][j].temperatura;
                ++count;
            }
            if (i < filas - 1) {
                sumTemperatura += region[i + 1][j].temperatura;
                ++count;
            }
        } else if (j == 0 || j == columnas - 1) { // Columnas del borde
            for (int di = -1; di <= 1; ++di) {
                int ni = i + di;

                if (ni >= 0 && ni < filas) {
                    sumTemperatura += region[ni][j].temperatura;
                    ++count;
                }
            }
            if (j > 0) {
                sumTemperatura += region[i][j - 1].temperatura;
                ++count;
            }
            if (j < columnas - 1) {
                sumTemperatura += region[i][j + 1].temperatura;
                ++count;
            }
        }
    } else if (tipo == 'C') { // Esquina
        if (i == 0 && j == 0) {
            sumTemperatura += region[i][j + 1].temperatura;   // Vecino derecho
            sumTemperatura += region[i + 1][j].temperatura;   // Vecino abajo
            sumTemperatura += region[i + 1][j + 1].temperatura; // Diagonal inferior derecha
            count = 3;
        } else if (i == 0 && j == columnas - 1) {
            sumTemperatura += region[i][j - 1].temperatura;   // Vecino izquierdo
            sumTemperatura += region[i + 1][j].temperatura;   // Vecino abajo
            sumTemperatura += region[i + 1][j - 1].temperatura; // Diagonal inferior izquierda
            count = 3;
        } else if (i == filas - 1 && j == 0) {
            sumTemperatura += region[i][j + 1].temperatura;   // Vecino derecho
            sumTemperatura += region[i - 1][j].temperatura;   // Vecino arriba
            sumTemperatura += region[i - 1][j + 1].temperatura; // Diagonal superior derecha
            count = 3;
        } else if (i == filas - 1 && j == columnas - 1) {
            sumTemperatura += region[i][j - 1].temperatura;   // Vecino izquierdo
            sumTemperatura += region[i - 1][j].temperatura;   // Vecino arriba
            sumTemperatura += region[i - 1][j - 1].temperatura; // Diagonal superior izquierda
            count = 3;
        }
    }

    if (count > 0) {
        return sumTemperatura / count;
    } else {
        return region[i][j].temperatura;
    }
}

