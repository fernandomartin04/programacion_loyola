#include<iostream>
using namespace std;

int main(){

	int salario, neto, antiguedad, trienio, anoLibre;
	cout << "Ingresa el salario bruto:" << endl;
	cin >> salario;
	cout << "Ingresa la antiguedad en la empresa:" << endl;
	cin >> antiguedad;
	
	anoLibre = antiguedad % 3;
	trienio = antiguedad / 3;
	neto = (salario * 0.805) + (45 * trienio) + (anoLibre * 5);
	cout << " Su sueldo neto es de " << neto << " euros" << endl;
	return 0;

}
