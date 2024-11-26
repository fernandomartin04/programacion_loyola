#include<iostream>
#include"cabecera.h"

using namespace std;

void potencia(int b, int e, int n) {

	int pow = 1;
	if (e != 0) {
		for (int i=0; i < n; i++){
			pow = pow * b;
			cout << pow << endl;
		}
	}
	else {
		cout << "1" << endl;
	}
	

}
