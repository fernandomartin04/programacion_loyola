#include<iostream>
#include"cabecera.h"
using namespace std;
#define DIM 100

int main() {

	int v[DIM];
	int n;
	
	do{
		cout << "Introduce el numero de elementos del vector (mayor que 0, menor de 100)" << endl;
		cin >> n;
	} while(n <= 0 || n > DIM);
	for (int i=0; i<n; i++){
		v[i] = i;
	}
	mostrar(v,n);
	cout << "El vector invertido es" << endl;
	invertir(v,n);
	mostrar(v,n);
	

}
