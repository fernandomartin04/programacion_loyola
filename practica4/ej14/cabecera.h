struct matriz{
	int nFil;
	int nCol;
	int m[100][100];
};

// Hay que pasar por referencia para que se guarde en el struct!!
void leer(matriz &m);
void mostrar(matriz m);
int diagonal(matriz m);
