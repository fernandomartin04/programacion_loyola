#include <iostream>
using namespace std;

int multiplicarVectores(int *v1, int*v2, int n) {
	int resultado = 0;
	for (int i = 0; i < n; i++) {
		resultado += v1[i] * v2[i];
	}
	return resultado;
}

int main () {
	
	int n;
	cout << "Introduce el numero de elementos de tu vector:" << endl;
	cin >> n;
	int v1[n], int v2[n];

	cout << "Agregue el vector v1" << endl;
	for (int i = 0; i < n; i++){
		
		cin >> v1[i];
		
	}
	cout << "Agregue el vector v2" << endl;
	for (int i = 0; i < n; i++){
		
		cin >> v2[i];
		
	}
	int result = multiplicarVectores(v1, v2, n);
	cout << "la multiplicacion de los vectores da el resultado de: " << result << endl;
	
	return 0;
	
}