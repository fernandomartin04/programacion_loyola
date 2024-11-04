#include<iostream>
using namespace std;

int main() {
	//Tengo que tener el contador a 0 si no no funciona
	int numero, resto, contador = 0;
	cout << "Escribe un número y diré si es primo o no" << endl;
	cin >> numero;
	
	//Compruebo que no es negativo o 0
	if (numero <= 0) {
		cout << "El número debe de ser mayor que 0" << endl;
	}

	else {
		//La i tiene que empezar en 1 sino da error matematico: Floating point exception (core dumped)
		for (int i=1; i<=numero; i++){
			resto = numero % i;
			if (resto == 0) {
				contador++;
			}	
		}
		if (contador > 2) {
			cout << "No es un número primo" << endl;
		}
		else {
			cout << "Es un número primo" << endl;
		}
	}
	

	return 0;
	
}
