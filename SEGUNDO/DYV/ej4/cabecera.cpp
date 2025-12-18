#include "cabecera.h"

int multiplicador(int** m, int x0, int x1, int y0, int y1) {
	int producto = 1;
	for(int i = x0; i<x1; i++) {
		for (int j = y0; j<y1; j++) {
			producto *= m[i][j];
		}
	}
	return producto;
}

int equiProducto(int** m, int x0, int x1, int y0, int y1) {
	if(x1-x0 == 2) return m[x0][y0] * m[x0][y0+1] * m[x0+1][y0] * m[x0+1][y0+1];
	int mitadFilas = (x0+x1)/2;
	int mitadColumnas = (y0+y1)/2;
	
	int producto1=multiplicador(m, x0, mitadFilas, y0, mitadColumnas);
	int producto2=multiplicador(m, x0, mitadFilas, mitadColumnas, y1);
	int producto3=multiplicador(m, mitadFilas, x1, y0, mitadColumnas);
	int producto4=multiplicador(m, mitadFilas, x1, mitadColumnas, y1);
	
	if (producto1 != producto2 || producto2 != producto3 || producto3 != producto4) return -1;
	
	int cuadrante1=equiProducto(m, x0, mitadFilas, y0, mitadColumnas);
	int cuadrante2=equiProducto(m, x0, mitadFilas, mitadColumnas, y1);
	int cuadrante3=equiProducto(m, mitadFilas, x1, y0, mitadColumnas);
	int cuadrante4=equiProducto(m, mitadFilas, x1, mitadColumnas, y1);

	if(cuadrante1==-1 || cuadrante2==-1 || cuadrante3==-1 || cuadrante4 == -1) return -1;
	
	return producto1*producto2*producto3*producto4;

	
}

int equiProducto(int** m, int n) {
	return equiProducto(m, 0, n, 0, n);
}