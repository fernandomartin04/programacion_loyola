#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Introduce un numero que corresponda a un día de la semana" << endl;
	cin >> num;
	
	switch(num){
	
		case 1:
		cout << "El dia seleccionado es el Lunes" << endl;
		break;
		case 2:
		cout << "El dia seleccionado es el Martes" << endl;
		break;
		case 3:
		cout << "El dia seleccionado es el Miércoles" << endl;
		break;
		case 4:
		cout << "El dia seleccionado es el Jueves" << endl;
		break;
		case 5:
		cout << "El dia seleccionado es el Viernes" << endl;
		break;
		case 6:
		cout << "El dia seleccionado es el Sábado" << endl;
		break;
		case 7:
		cout << "El dia seleccionado es el Domingo" << endl;
		break;
		default: cout << "Introduce un numero entre los 7 de los dias de la semana" << endl;
	
	}
	return 0;

}
