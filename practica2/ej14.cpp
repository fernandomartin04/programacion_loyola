#include<iostream>
using namespace std;

int main() {
	int numero, digito, producto = 1;
	cout << "Escribe un número y multiplico sus dígitos" << endl;
	cin >> numero;
	
	//Convertir num negativo a positivo
	numero = abs(numero); 
	
	if (numero == 0) {
		producto = 0;
	}
	else{
		while (numero > 0) {
		
			//Al dividir por 10 extraigo su ult digito
			digito = numero % 10;
			
			//Multiplico digito q extraigo por el producto
			producto *= digito;
			
			//Elimino ult digito
			numero /= 10;
			
		}
	}
	cout << "El producto entre los dos digitos del num es: " << producto << endl;
	return 0;
	
}
