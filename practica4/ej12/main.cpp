#include<iostream>
#include"cabecera.h"
using namespace std;

int main() {

	int matriz[DIM][DIM];
	int v[DIM];
	int f, c, k, n;	
	cout << "Introduce el numero de filas" << endl;
	cin >> f;
	cout << "Introduce el numero de columnas" << endl;
	cin >> c;

	leer(matriz, f, c);
	cout << "La matriz es :" << endl;
	mostrar(matriz, f, c);
	
	cout << "Ahora rotaremos hacia la derecha los elementos de la fila que elijas" << endl;
	cout << "Elige cuantas posiciones: " << endl;
	cin >> k;

	
	do{
			cout << "Ahora elige cual fila (del 0 hasta el max de filas seleccionadas previamente)" << endl;
		cin >> n;
	} while(n > f); 
	
	cout << "Tu matriz quedaria rotada tal que asi: " << endl;
	rotar(matriz, c, k, n);
	mostrar(matriz, f, c);
	
}
