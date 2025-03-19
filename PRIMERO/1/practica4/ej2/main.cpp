#include<iostream>
#include"cabecera.h"

using namespace std;


int main(){

	int num, comb, respuesta1, respuesta2;
	do {
		cout << "Introduzca el numero que calcularemos el factorial" << endl;
		cin >> num;
	} while(num <= 0);
	do {
		cout << "Introduzca el numero para el combinatorio" << endl;
		cin >> comb;
	} while(comb <= 0 || comb >= num);
	
	int respuesta;
	
	respuesta1 = factorial(num);
	respuesta2 = combinatorio(num, comb);
	
	cout << "El factorial es: " ;
	cout << respuesta1 << endl;
	
	cout << "El combinatorio es: " << respuesta2 << endl;
	
	
	return 0;

}

