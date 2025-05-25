
/////
// Fila 1

#include "ClienteEmpleado.h"

// 0.15
float ClienteEmpleado::descuento = 0.5;
// 0.15
string Empleado::nombre_empresa = "Loyola";

// 0.4
template <class T> ostream & operator<<(ostream & os, T & c){
    os << c.toString() << endl;
    return os;
}

int main(){
    // 0.05 cu = 0.8
    Cliente c1 = Cliente("uno");

    c1 += 10;

    c1 -= 3;
    
    cout << c1;
    
    Empleado e1 = Empleado("dos", 12000);
    Empleado e2;

    cout << e1;
    cout << e2;
    e2 = e1;
    cout << e2;

    ClienteEmpleado ce;
    ce.setNombre("Tres");
    ce += 15;
    cout << ce;

    e1.cobrarACliente(c1);
    ce.cobrarACliente(c1);
    

    return 0;
}

