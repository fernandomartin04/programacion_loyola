#include <iostream>
using namespace std;
// Fernando Martin Gonzalez 29501490B
float sumaMatrices(float *m1,float *m2,float m,float n) {
	int resultado = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; i < n; j++){
				resultado += m1[i][j] + m2[i][j];
		}
	}
	return resultado;
}

int main () {
	
	int n, m;
	cout << "Introduce el numero de filas de las matrices:" << endl;
	cin >> m;
	cout << "Introduce el numero de columnas de las matrices:" << endl;
	cin >> n;
	float m1[m][n], m2[m][n];

	cout << "Agregue la matriz m1" << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> m1[i][j];
		}	
	}
	cout << "Agregue la matriz m2" << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> m2[i][j];
		}
	}
	float result = sumaMatrices(m1, m2, m, n);
	cout << "La suma de las matrices da el resultado de: " << result << endl;
	
	return 0;
	
}