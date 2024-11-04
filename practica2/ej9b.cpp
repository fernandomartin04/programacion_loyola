#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Introduce un numero que corresponda a un día de la semana" << endl;
	cin >> num;

	if (num < 1 || num > 7) {
		cout << "Introduce un numero entre los 7 de los dias de la semana" << endl;
	}
	else {
		if (num == 1) {
			cout << "El dia seleccionado es el Lunes" << endl;
		}
		else {
			if (num == 2) {
				cout << "El dia seleccionado es el Martes" << endl;
			}
			else {
				if (num == 3) {
					cout << "El dia seleccionado es el Miércoles" << endl;
				}
				else {
					if (num == 4) {
					cout << "El dia seleccionado es el Jueves" << endl;
					}
					else {
						if (num == 5) {
							cout << "El dia seleccionado es el Viernes" << endl;
						}
						else {
							if (num == 6) {
								cout << "El dia seleccionado es el Sábado" << endl;
							}
							else{
								cout << "El dia seleccionado es el Domingo" << endl;
							}
						}
					}
				}
			}
		}
	}
	
	return 0;

}
