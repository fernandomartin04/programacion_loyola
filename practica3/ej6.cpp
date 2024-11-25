#include <iostream>
using namespace std;
#define DIM 100


int main() {

	int matriz[DIM][DIM];
	int f, c, p;
	
	
	
	cout << "Introduce el número de filas: ";
	cin >> f;
	cout << "Introduce el número de columnas: ";
	cin >> c;
	float aux[c];
	
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
	
	cout << "La matriz quedaria asi: " << endl;
	for (int i = 0; i < f; i++){
		int suma = 0;
		for (int j = 0; j < c; j++){
			cout << matriz[j][i] << " ";
			suma += matriz[i][j]; // Sumo los elementos de las columnas
		}
		
		
		aux[i] = suma; // Guardo en la matriz la suma
		cout << endl;	
	}
	float media = 0;
	for (int i = 0; i < c; i++) {
		media = 0;
		media = aux[i] / f;
		aux[i] = media;
	}
	
	
	cout << "La matriz con la media de la suma de los elementos de las columnas es: " << endl;
	for (int i = 0; i < c; i++) {
		cout << aux[i] << " ";
	}
	cout << endl;
	return 0;

}


