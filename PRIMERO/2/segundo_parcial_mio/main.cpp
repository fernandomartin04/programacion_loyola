// incluir librerias

// aqui inicializar atributos estáticos

#include <iostream>
using namespace std;
//#include "Persona.h"
//#include "Cliente.h"
#include "Empleado.h"

// verificar si debo hacer o no como plantilla
//ostream & operator<<(ostream & os, ){
//}

int main(){
    // 1.	
	Cliente c1("federico", 100);

	Persona p1("pablo");
	cout << "El nombre es: " << p1.toString() << endl;
	Persona p2;
	cout << "El nombre es: " << p2.toString() << endl;
	Persona p3;
	p3.setNombre("almiron");
	cout << "El nombre es: " << p3.toString() << endl;
	
	
	
	Cliente c2("alfonso", 50);
	cout << "Tiene un total de: " << c2.getTotalCuenta() << " euros" << endl;

	// 2.
    // 3.
    // 4.
	cout << c1.toString() << endl;
    // 5.
	Empleado e1("Eduardo", 15000);
    // 6.
	Empleado e2;
    // 7.
	cout << e1.toString() << endl;
	cout << e2.toString() << endl;
    // 8.
	e2 = e1;
    // 9.
	cout << e2.toString << endl;
    // 10.
	ClienteEmpleado ce1;
    // 11.
	ce1.setNombre("Alicia");
    // 12.
    // 13.
    // 14.
	cout << ce1.toString() << endl;

    return 0;
}