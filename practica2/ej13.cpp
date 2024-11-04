#include<iostream>
using namespace std;

int main() {
	int numero1, numero2, total = 0;
	cout << "Escribe dos números y los multiplico mediante el metodo de las sumas sucesivas" << endl;
	cin >> numero1;
	cout << "Escribe el segundo numero" << endl;
	cin >> numero2;
	for (int i = 0; i < numero2; i++){
		total += numero1;

	}
	cout << "El resultado de la multiplicacion es: " << total << endl;
	return 0;
}
