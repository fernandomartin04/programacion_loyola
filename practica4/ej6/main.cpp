#include<iostream>
#include"cabecera.h"
using namespace std;
#define DIM 100

int main(){

	int n;
	int v[DIM];
	
	do {
		cout << "Introduce la longitud del vector (menor que 0) " << endl;
		cin >> n;
	} while(n < 0 || n > DIM);

	// añado
	introducir(v,n);

	// muestro
	cout << "El vector es:" << endl;
	mostrar(v,n);

	// suma
	int sum = suma(v,n);
	cout << "La sumam de sus elementos es: " << sum << endl;

	// media
	float m = media(v, n);
	cout << "La media de los elementos de la matriz es: " << m << endl;
	
	// varianza
	float var = varianza(v, n);
	cout << "La varianza es: " << var << endl;
	
	// max
	max(v,n);
	
	// min
	min(v,n);
	return 0;

}
