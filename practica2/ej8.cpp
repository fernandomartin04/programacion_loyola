#include<iostream>
#include<cmath>
using namespace std;

int main(){

	float a, b, c;
	float solucion1, solucion2, D;
	cout << "Introduce tres valores numericos para hacer una ecuacion" << endl;
	cout << "Introduce primero para x^2: " << endl;
	cin >> a;
	cout << "Introduce para x: " << endl;
	cin >> b;
	cout << "Introduce valor para el numero entero" << endl;
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			cout << "No tiene solucion puesto que a y b valen 0" << endl;
		}
		else {
			cout << "a es 0" << endl;
			solucion1 = -c / b;
			cout << "La solucion es: " << solucion1 << endl;	
		}
	}
	else {
		D = pow(b, 2) -(4 * a * c);
		if (D > 0) {
			solucion1 = (-b + sqrt(D)) / (2 * a);
			solucion2 = (-b + sqrt(D)) / (2 * a);
			cout << "La ecuacion tiene 2 soluciones, " << solucion1 << "y la otra es " << solucion2 << endl;
		}
		else {
			if(D == 0) {
				solucion1 = -b / (2 * a);
				cout << "La ecuacion tiene como solucion real: x = " << solucion1 << endl;
			}
			else {
				float real = -b / (2 * a);
				float imaginario = sqrt(-D) / (2 * a);
				cout << "La ecuacion tiene dos soluciones imaginarias: " << endl;
				cout << "x1 = " << real << " + " << imaginario << "i" << endl;
				cout << "x1 = " << real << " - " << imaginario << "i" << endl;
			}
		}
	}
	return 0;
}
