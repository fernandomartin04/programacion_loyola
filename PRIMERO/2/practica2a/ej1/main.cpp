#include <iostream>
#include "cabecera.h"
using namespace std;

int main() {
	
	Rectangulo r(10, 5);
	
	cout << "Alto: " << r.getAlto() << " , Ancho: " << r.getAncho() << endl;
	
	r.setAlto(20);
	r.setAncho(10);
	
	cout << "Nuevo alto: " << r.getAlto() << ", Nuevo ancho: " << r.getAncho() << endl;
	
	r.cambiarAltoAncho(6, 3);
	cout << "Dimensiones finales -> Alto: " << r.getAlto() << ", Ancho: " << r.getAncho() << endl;
	
	return 0;
	
}