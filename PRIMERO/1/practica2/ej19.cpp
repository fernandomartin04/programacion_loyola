#include<iostream>
using namespace std;

int main() {

	int N, perfecto = 0, resto;
	cout << "Escribe un número y hago la suma de los N primeros números" << endl;
	cin >> N;
	if (N <= 0) {
		cout << "El número no puede ser 0" << endl;
	}
	else {
		
		for (int i=1; i<N; i++){
			resto = N % i;
			if (resto == 0) {
				perfecto = perfecto + i	;
			}
		}
	}
	cout << perfecto << endl;
	if (perfecto == N) {
		cout << "El número " << N << " es un número perfecto." << endl;
	}
	else {
		cout << "No es un número perfecto." << endl;
	}
	

	return 0;
}
