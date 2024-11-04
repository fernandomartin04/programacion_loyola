#include <iostream>
using namespace std;

int main(){

	float a, b, c, d, media, total, porcentajea, porcentajeb, porcentajec, porcentajed;

	cout << "Introduce el precio del primer establecimiento: ";
	cin >> a;
	cout << "Introduce el precio del segundo establecimiento: ";
	cin >> b;
	cout << "Introduce el precio del tercer establecimiento: ";
	cin >> c;
	cout << "Introduce el precio del cuarto establecimiento: ";
	cin >> d;

	int n = 4;
	media = (a + b + c + d) / n;
	total = a + b + c + d;
	
	porcentajea = (a / total) * 100;
	porcentajeb = (b / total) * 100;
	porcentajec = (c / total) * 100;
	porcentajed = (d / total) * 100;
	
	cout << "La media del precio es de " << media << " euros." << endl;
	cout << "Los porcentajes de los establecimientos respecto a total respectivamente son del: "
<< porcentajea << "%, " << porcentajeb << "%, " << porcentajec << "%, " << porcentajed << "%, " << endl;

	return 0;
	
}

