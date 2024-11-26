#include<iostream>
#include"cabecera.h"

using namespace std;

int main() {

	int a, b, num;
	cout << "Introduce un numero y te dire si es primo: " << endl;
	cin >> num;
	
	cout << "Ahora introduce un rango de dos numeros y te dire los numeros primos del rango" << endl;
	do {
		cout << "Introduce el primero" << endl;
		cin >> a;
	} while(a <= 0);
	
	do {
		cout << "Introduce el segundo" << endl;
		cin >> b;
	} while(b <= a);
	
	bool respuesta;
	respuesta = primo(num);
	if (respuesta) {
		cout << "el numero " << num << " es primo" << endl;
	}
	print(num,a,b);
	return 0;

}
