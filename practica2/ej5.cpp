#include<iostream>
using namespace std;

int main() {
	
	int num, resto1, resto2, resto3;
	cout << "Introduce un año y te dire si es bisiesto o no: " << endl;
	cin >> num;
	resto1 = num % 4;
	resto2 = num % 100;
	resto3 = num % 400;

	if (resto1 != 0){
		cout << "NO es un año bisiesto." << endl;
	}
	else {
		if (resto2 == 0 && resto3 != 0) {
			cout << "No es año bisiesto" << endl;
		}
		else {
			cout << "Es un año bisiesto" << endl;
		}
	}
	return 0;
}
