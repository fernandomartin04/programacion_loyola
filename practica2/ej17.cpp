#include<iostream>
using namespace std;

int main() {

	int N, factorial = 1;
	cout << "Escribe un número y hago la suma de los N primeros números" << endl;
	cin >> N;
	if (N <= 0) {
		cout << "El número no puede ser 0" << endl;
	}
	else {
		
		for (int i=1; i<=N; i++){
			factorial = factorial * i ;
		}
	}
	
		
	cout << "El factorial de " << N << "es: " << factorial << endl;

	return 0;
}
