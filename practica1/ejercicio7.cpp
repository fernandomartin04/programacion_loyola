#include<iostream>
#include <string>
using namespace std;

int main(){
	string nombre, apellidos;
	int nacimiento;
	cout << "Introduce tu nombre: " << endl;
	getline(cin, nombre);
	cout << "Introduce tus apellidos: " << endl;
	getline(cin, apellidos);
	cout << "Introduce tu año de nacimiento: " << endl;
	cin >> nacimiento;
	
	cout << "Hola " << nombre << apellidos << ", tienes " << 2024 - nacimiento << " años si tu cumpleaños es antes del 2 de octubre, si no tienes " << 2024-1 - nacimiento << endl; 
	return 0;
	
}
