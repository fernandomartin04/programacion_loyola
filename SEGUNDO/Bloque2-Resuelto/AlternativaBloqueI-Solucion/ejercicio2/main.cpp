#include<iostream>
#include"cabecera.h"

using namespace std;

int main()
{
	/*TODO Descomentar cuando tenga el apartado c) implementado*/
	cout << "Entrenamiento de Goku - Funcion recursiva multiple: " << endl;
	for(int i=1; i<=15; i++){
		cout << "Nivel [" << i << "]: " << funcionR(i) << endl;
	}
	
	/*TODO Descomentar cuando tenga el apartado d) implementado*/
	cout << endl << "Entrenamiento de Goku - Funcion iterativa: " << endl;
	for(int i=1; i<=15; i++){
		cout << "Nivel [" << i << "]: " << funcionI(i) << endl;
	}
	
	return 0;
}
