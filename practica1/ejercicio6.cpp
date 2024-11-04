#include<iostream>
using namespace std;

int main(){
	float semana, media;
	media = 23.6;
	cout << "Introduce un numero de semanas del año 2030 para calcular la media de comida desperdiciada" << endl;
	cin >> semana;
	cout << "Los kg de comida desperdiciados serán " << media*semana << " millones." << endl;
	return 0;
}
