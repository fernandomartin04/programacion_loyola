#include "ClienteEmpleado.h"

//0.3
ClienteEmpleado::ClienteEmpleado() : Cliente(), Empleado(){
}

//0.15
int ClienteEmpleado::getTotalCuenta(){
    return total_cuenta *(1-descuento);
}

//0.15
string ClienteEmpleado::toString(){
    return Cliente::toString() + "\n" + Empleado::toString() + "\nDescuento: " + to_string(descuento);
}
