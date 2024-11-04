#include<iostream>
using namespace std;

int main(){

	int opcion, dias, bisiesto;
	cout << "Introduce un mes del año del 1 al 12: " << endl;
	cin >> opcion;
	
	
	switch (opcion){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dias = 31;
		break;
		case 4: case 6: case 9: case 11:
		dias = 30;
		break;
		case 2: 
		cout << "Es el año bisiesto? Introduce 0 para si y 1 para no" << endl;
		cin >> bisiesto;
		if (bisiesto == 1) {
			dias = 28;
		}
		else {
			dias = 29;
		}
		break;
		default: cout << "Introduce una opcion correcta" << endl;
		return 1;
	}
	cout << "El mes tiene un total de " << dias << " dias" << endl;
	return 0;
}
