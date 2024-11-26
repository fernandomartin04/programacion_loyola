#include <iostream>
#include"cabecera.h"
using namespace std;

int main() {

	int b, e, n;
	do {
		cout << "Introduce una base" << endl;
		cin >> b;
	} while (b <= 0);
	do {
		cout << "Introduce un exponente" << endl;
		cin >> e;
	} while (e < 0);
	
	do{
		cout << "Introduce el numero de las potencias que quieras ver " << endl;
		cin >> n;
	}while(n < 0 || n > e);
	potencia(b,e,n);
	
}
