#include<iostream>
using namespace std;

int main(){

	double numero1, numero2;
	cout << "Introduce dos numeros reales: " << endl;
	cin >> numero1;
	cin >> numero2;
	
	if (numero1 != numero2) {
		(numero1>numero2) ? cout << numero1 << endl : cout << numero2 << endl;
	}
	else {
		cout << "No puedes introducir dos números iguales." << endl;
	}

}
