#include<iostream>
#include"cabecera.h"
using namespace std;

int main() {

	// Aqui declaro la variable de la struct pa q sea mas corto
		
	int num;
	float sum[2];
	float med[2];
	sum[0] = 0;
	sum[2] = 0;
	
	// Vector de numeros complejos
	complejo v[100];
	
	cout << "cuantos numeros complejos vas a añadir? no puedes decir num negativo o 0" << endl;
	cin >> num;
	
	if (num > 0 && num <= 100){
		leer(v, num);
		mostrar(v, num);
		suma(v, num, sum);
		media(v, num, sum, med);
		
		cout << "La suma de todos los numeros seria: " << sum[0] << " + " << sum[1] << "i" << endl;
		cout << "La media de todos los numeros seria: " << med[0] << " + " << med[1] << "i" << endl;
	}
	else {
		cout << "Numero invalido debe estar entre 1 y 100" << endl;
	}
	
	return 0;
	
}

