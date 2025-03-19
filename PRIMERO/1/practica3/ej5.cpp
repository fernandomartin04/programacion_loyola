#include <iostream>
using namespace std;
#define DIM 100


int main() {

	int matriz[DIM][DIM];
	int f, c, cont = 0, uno, dos;
	
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
			matriz[i][j] = cont;
			cout << matriz[i][j] << " ";
			cont++;
		}
		cout << endl;
	}
	
	
	
	cout << "Ahora puedes invertir dos filas!!" << endl;
	
	
	
	do {
		cout << "Recuerda seleccionar correctamente, no un numero mayor que los posibles, comienza por el primero:" << endl;
		cin >> uno;
		cout << "Selecciona la fila con la que vas a intercambiarla: " << endl;
		cin >> dos;
	} while (uno > f || dos > f || uno < 0 || dos < 0);
	
	int aux[c];
	
	// Guardo la fila uno en una variable para dpp copiar la dos en la uno
	for (int j = 0; j < c; j++){
		aux[j] = matriz[uno][j];
		
	}
	
	// Copio la fila dos en la fila uno 
	for (int i = 0; i < c; i++){
		matriz[uno][i] = matriz[dos][i];
	}
	
	// Copio la variable aux en la fila dos
	for (int i = 0; i < c; i++ ){
		matriz[dos][i] = aux[i];
	}
	
	// Muestro por pantalla
	cout << "La matriz con las filas invertidas quedaria asi: " << endl;
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;

}


