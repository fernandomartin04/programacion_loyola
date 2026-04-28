#include <iostream>
#include "VehiculoHibrido.h"
using namespace std;

// Plantilla imprimirFicha
template<typename T>
void imprimirFicha(T & obj, string separador) {
	cout << obj << separador;
}

int main() {
    // 1. 
	VehiculoElectrico ve1;
	ve1+=50;
	//cout << ve1 << endl;
    // 2. 
	ve1+=15;
	//cout << ve1 << endl;
    // 3. 
	ve1-=5;
	//cout << ve1 << endl;
    // 4. 
	imprimirFicha(ve1, "\n---\n");
    // 5. 
	VehiculoCombustion vc1;
	vc1 = vc1 + 30;
	//cout << vc1 << endl;

    // 6. 
	cout << vc1.toString() << endl;
	cout << ve1.toString() << endl;
	
    // 7. 
    vc1 = vc1 + 20;
	//cout << vc1 << endl;
    // 8. 
    vc1 = vc1 - 5;
    // 9. 
    VehiculoHibrido vh1;
    // 10. 
    vh1 = vh1 + 50;
	vh1 += 100;
	//cout << vh1 << endl;
    // 11.
	cout << "Bateria: "<< vh1.getNivelBateria() << endl;
	cout << "Autonomia: " << vh1.getAutonomia() << endl;
    // 12.
    imprimirFicha(vh1, "\n---\n");

    return 0;
}