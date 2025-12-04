#include"cabecera.h"

bool filtro(int** m, int x0, int x1, int y0, int y1) {
	if (x1-x0==2) return m[x0][y0] < m[x0+1][y0+1];
	int mitadFilas = (x0 + x1) / 2;
	int mitadColumnas = (y0 + y1) / 2;
	
	bool cuadrante1 = filtro(m, x0, mitadFilas, y0, mitadColumnas);
	bool cuadrante2 = filtro(m, x0, mitadFilas, mitadColumnas, y1);
	bool cuadrante3 = filtro(m, mitadFilas, x1, y0, mitadColumnas);
	bool cuadrante4 = filtro(m, mitadFilas, x1, mitadColumnas, y1);
	
	if (cuadrante1 && cuadrante2 && cuadrante3 && cuadrante4) return true;
	return false;
	
}

bool filtro(int** m, int n) {
	return filtro(m, 0, n, 0, n);
}