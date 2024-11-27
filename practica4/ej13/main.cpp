#include<iostream>
#include"cabecera.h"
using namespace std;

int main() {

	int matriz[DIM][DIM];
	int v[2];
	int f, c, n;	
	cout << "Introduce el numero de filas" << endl;
	cin >> f;
	cout << "Introduce el numero de columnas" << endl;
	cin >> c;

	leer(matriz, f, c);
	cout << "La matriz es :" << endl;
	mostrar(matriz, f, c);
	
	cout << "Ahora dime un elemento y te dire las coordenadas en que se encuentra en la matriz o -1,-1 si no lo encuentro" << endl;

	cin >> n;
	
	cout << "Tu numero se encuentra en las posiciones: " << endl;
	buscar(matriz, f, c, n, v);
	
	return 0;
	
}
