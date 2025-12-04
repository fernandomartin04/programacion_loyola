#include "cabecera.h"

float minimo (float p1, float p2, float p3, float p4) {
	float min = p1;
	if (min > p2) min = p2;
	if (min > p3) min = p3;
	if (min > p4) min = p4;
	
	return min;
}

float minimoEnTerreno (float **m, int x0, int x1, int y0, int y1) {
	int mitadFilas = (x0 + x1) / 2;
	int mitadColumnas = (y0 + y1) / 2;
	
	float cuadrante1 = minimoEnTerreno(m, x0, mitadFilas, y0, mitadColumnas);
	float cuadrante2 = minimoEnTerreno(m, x0, mitadFilas, mitadColumnas, y1);
	float cuadrante3 = minimoEnTerreno(m, mitadFilas, x1, y0, mitadColumnas);
	float cuadrante4 = minimoEnTerreno(m, mitadFilas, x1, mitadColumnas, y1);
	return minimo(cuadrante1, cuadrante2, cuadrante3, cuadrante4);
}




float minimoEnTerreno(float **m, int N) {
	return minimoEnTerreno(m, 0, N, 0, N);
}
