#include<iostream>
#include"cabecera.h"
using namespace std;
#define DIM 100

int main() {

	int n, x;
	int v[DIM];
	do{
		cout << "Introduce el numero de elementos del vector (mayor que 0, menor de 100)" << endl;
		cin >> n;
	} while(n <= 0 || n > DIM);
	introducir(v,n);
	mostrar(v,n);
	
	do{
		cout << "Introduce el valor para x" << endl;
		cin >> x;
	} while(x <= 0 || x > n);
	evaluar(v,n,x);
	
	return 0;

}
