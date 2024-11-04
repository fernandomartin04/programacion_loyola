#include<iostream>
using namespace std;

int main() {
	int numero;
	int contadorPar = 0;
	int contadorImpar = 0;
	cout << "Escribe un números y dire sin son pares o impares, cuando escribas -1 finalizaré" << endl;
	
	do {
		cin >> numero;
		float resto = numero % 2;
		if (resto == 0) {
			contadorPar++;
		}
		else {
			
			contadorImpar++;
		}	
	}
	while (numero != -1);	
		
	cout << "Has escrito " << contadorPar << " numeros pares y " << contadorImpar - 1 << " impares." << endl;

}
