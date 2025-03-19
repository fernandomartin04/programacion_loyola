#include<iostream>
using namespace std;

int main() {

	int N, suma = 0;
	cout << "Escribe un número y hago la suma de los N primeros números" << endl;
	cin >> N;
	
	for (int i=0; i<=N; i++){
		suma = suma + i ;
	}
		
	cout << suma << endl;

	if (N > 0) {
		cout << "Por el teorema de Gauss se cumple ya que ((1 + " << N << ") ∗ " << N << ")/2 = " << ((1 + N) * N)/2 << endl;
	}
	else {
		cout << "No se ha cumplido puesto que es un númer menor o igual a 0" << endl;
	}
	return 0;
}
