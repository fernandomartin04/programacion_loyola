#include<iostream>
using namespace std;

int main() {

	float antiguo, nuevo;
	cout << "Introduce el precio que tenia un producto: " << endl;
	cin >> antiguo;
	
	if (antiguo <= 0) {
		cout << "El precio es negativo, error" << endl;
	}
	
	else if (antiguo < 10) {
		nuevo = antiguo * 0.95;
		cout << "El precio actual es de: " << nuevo << endl;
	}
	else {
		if (antiguo >= 10 && antiguo < 30) {
			nuevo = antiguo * 0.93;
			cout << "El precio actual es de: " << nuevo << endl;
		}
		else {
			if (antiguo >=30 && antiguo < 50) {
				nuevo = antiguo * 0.92;
				cout << "El precio actual es de: " << nuevo << endl;
			}
			else {
				nuevo = antiguo * 0.90;
				cout << "El precio actual es de: " << nuevo << endl;
				
			}
		}
	}

}
