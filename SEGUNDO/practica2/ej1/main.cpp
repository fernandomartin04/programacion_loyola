#include "cabecera.h"

int main() {
	int v1[4]={1,2,3,4};
	cout << "Funcion No Final: " << funcionNoFinal(v1, 4) << endl;
	cout << "Funcion Final: " << funcionFinal(v1, 4) << endl;
	cout << "Funcion iterativa: " << funcionIterativa(v1, 4) << endl;
	return 0;
}