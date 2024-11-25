#include <iostream>
using namespace std;
#define DIM 100


int main() {

	int matriz[DIM][DIM];
	int f, c, p, fila, num;
	
	
	
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
	cout << endl;
	
	// Muestro la matriz
	cout << "La matriz quedaria asi: " << endl;
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << endl;	
	}
	
	cout << "Selecciona ahora una fila para que desplacemos sus elementos a la derecha" << endl;
	cin >> fila;
	cout << "Selecciona también cuántas posiciones rotar a la derecha" << endl;
	cin >> num;
	
	// Roto fila en la matriz auxiliar
	int aux[DIM];
	for (int i = 0; i < c; i++) {
		// Uso el modulo para q si se pasa de elementos
		// el resto es la posicion nueva q le toca al num
		aux[(i + num) % c] = matriz[fila][i]; 
	}
	
	// Copio el resultado de vuelta a la matriz
	for (int i = 0; i < c; i++) {
		matriz[fila][i] = aux[i];
	}
	cout << "La matriz quedaria asi: " << endl;
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << endl;	
	}
	
	
	cout << endl;
	return 0;

}


