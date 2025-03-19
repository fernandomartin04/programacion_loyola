#include <iostream>
#define PI 3.1416
using namespace std;

void ej1(float &rf1) {
	rf1 = rf1 * (PI / 180.0);
}

int main () {
	
	float f1;
	cout << "Agregue un numero" << endl;
	cin >> f1;
	ej1(f1);
	cout << "Angulo en radianes: " << f1 << endl; 
	return 0;
	
}