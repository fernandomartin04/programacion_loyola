#include<iostream>
#include<cmath>
using namespace std;

int main() {

	double numero;
	cout << "Introduce un numero real: " << endl;
	cin >> numero;
	
	if (numero >= 0) {
		cout << sqrt(numero) << endl;
	}
	else {
		cout << "Error, no puedo hacer la raíz de un número negativo." << endl;
	}

}
