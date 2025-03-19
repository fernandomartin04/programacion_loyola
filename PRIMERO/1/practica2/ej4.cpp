#include<iostream>
using namespace std;
const float pi = 3.14;

int main(){
	int radio, opcion;
	cout << "Introduce el valor de un radio: " << endl;
	cin >> radio;
	
	cout << "Elige una de las opciones: " << endl << "1. Longitud de una circunferencia" << endl;
	cout << "2. Area de una circunferencia." << endl << "3. Area de una esfera" << endl;
	cout << "4. Volumen de una esfera" << endl;
	
	cin >> opcion;
	
	switch (opcion){
		case 1: cout << 2*radio*pi << endl;
		break;
		case 2: cout << pi*radio*radio << endl;
		break;
		case 3: cout << 4*pi*radio*radio << endl;
		break;
		case 4: cout << 4/3*pi*radio*radio*radio << endl;
		break;
		default: cout << "Introduce la opcion correcta" << endl;
		
	}

}
