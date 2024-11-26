#include<iostream>
#include"cabecera.h"
using namespace std;

int main(){

	int num, a, b;
	cout << "Te diré si el numero que escribas a continuacion es perfecto o no" << endl;
	cout << "El numero y por lo tanto el rango de despues han de ser mayores que 1" << endl;
	do {
		cout << "Introduce tu numero y que sea positivo" << endl;
		cin >> num;
	} while(num < 1);
	
	cout << "Ahora introduce dos numeros y te dire los nº perfectos que hay en ese rango" << endl;
	do {
		cout << "Introduce el menor del rango" << endl;
		cin >> a;
	} while(a < 1);

	do {
		cout << "Introduce el mayor del rango" << endl;
		cin >> b;
	} while(b <= (a+1));
	
	bool perfe;
	perfe = perfecto(num);
	
	if (perfe) {
		cout << "El numero introducido si es perfecto" << endl;
	} else {
		cout << "El numero no es perfecto" << endl;
	}
	
	print(num,a,b);
	
	return 0;
}
