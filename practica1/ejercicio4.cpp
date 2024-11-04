#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//Inicio variables
	float c1, c2, h;
	
	//Solicito al usuario los varoles de las variables
	cout << "Ingrese el valor del cateto 1: " << endl;
	cin >> c1;
	cout << "Ingrese el valor del cateto 2: " << endl;
	cin >> c2; 
	//Obtener h haciendo la raiz cuadrada
	h = sqrt(c1*c1 + c2*c2);
	//h = sqrt(pow(c1, 2) + pow(c2,2));
	cout << "El valor de la hipotenusa es: " << h << endl;
	
}
