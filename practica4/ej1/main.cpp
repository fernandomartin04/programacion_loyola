#include<iostream>
#include"cabecera.h"

using namespace std;


int main(){

	int ano_inicio, ano_fin;
	cout << "Introduzca el año de inicio: " << endl;
	cin >> ano_inicio;
	
	cout << "Introduzca el año de fin: " << endl;
	cin >> ano_fin;
	bool respuesta;
	
	for (int i = ano_inicio; i <= ano_fin; i++){
		respuesta = esBisiesto(i);
		if (respuesta) {
			cout << i << " es bisiexto" << endl;
			
		}
	} 
	
	return 0;

}

