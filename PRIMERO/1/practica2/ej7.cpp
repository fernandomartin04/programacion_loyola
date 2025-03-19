#include<iostream>
using namespace std;

int main() {

	int opcion, bisiesto;
	cout << "Introduce un mes del año del 1 al 12: " << endl;
	cin >> opcion;
	if (opcion == 1 || opcion == 3 || opcion == 5 || opcion == 7 || opcion == 8 || opcion == 10 || opcion == 12) {
		cout << "El mes tiene un total de 31 días" << endl;
	}
	else {
		if (opcion != 2) {
			cout << "El mes tiene 30 dias" << endl;
		}
		else {
			cout << "Es el año bisiesto? Introduce 0 para si y 1 para no" << endl;
			cin >> bisiesto;
			if (bisiesto == 1) {
				cout << "El mes tiene un total de 28 dias" << endl;
			}
			else {
				cout << "El mes tiene un total de 29 dias" << endl;
			}
		}
	}

}
