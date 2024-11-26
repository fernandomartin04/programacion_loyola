#include<iostream>
#include"cabecera.h"
using namespace std;
#define DIM 100

int main() {
	int n, s;
	int v[DIM];
	int control = 0;
	do{
		cout << "Introduce el numero de elementos del vector (mayor que 0, menor de 100)" << endl;
		cin >> n;
	} while(n <= 0 || n > DIM);
	cout << "Elige una de las opciones" << endl;
	do{
		cout << "1. Anadir un elemento al vector" << endl;
		cout << "2. Eliminar un elemento del vector" << endl;
		cout << "3. Mostrar contenido del vector" << endl;
		cout << "4. Contar el numero de divisores de 5" << endl;
		cout << "5. Salir" << endl;
		cin >> s;
		
		switch (s) {
			case 1:
				control = anadir(v,n,control);
				break;
			
			case 2:
				control = eliminar(v,n,control);
				break;
			
			case 3:
				mostrar(v,n,control);
				break;
			
			case 4:
				divisores(v,n,control);
				break;
			
			case 5:
				cout << "Gracias por entrar al menu!!" << endl;
				break;
				
		}
	}while (s != 5);
	
}
