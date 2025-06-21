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
	Cliente c1 = Cliente("uno");
	c1 += 10;
	c1 -= 3;
	cout << c1;
	Empleado e1 = Empleado("Eduardo", 15000);
	Empleado e2;
	
	cout << e1;
	cout << e2;
	e2 = e1;
	cout << e2;
	ClienteEmpleado ce1;
	ce1.setNombre("Alicia");
	ce1 += 15;
	cout << ce1.getTotalCuenta();

    return 0;
}