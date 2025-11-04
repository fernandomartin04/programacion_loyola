#include<iostream>
#include"vuelo.h"

using namespace std;

int main()
{
	Vuelo v1("Barcelona","20231218",150, 20.5);
	// Probad con esta linea para ver la excepcion
	// Vuelo v1("Barcelona","20231218",150, -20.5);
	cout << v1.getDestino() << endl;
	cout << v1.getFecha() << endl;
	cout << v1.getNumP() << endl;
	cout << v1.getPrecio() << endl;
	cout << endl;
	
	Vuelo v2 = v1;
	cout << v2;
	
	Vuelo v3;
	cin >> v3;
	cout << v3;
	
	cout << (v1 < v3) << endl;
	
	return 0;
}
