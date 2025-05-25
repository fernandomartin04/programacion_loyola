#include"Empleado.h"

//0.3
Empleado::Empleado(): Persona(){
    sueldo = 12000;
}

//0.3
Empleado::Empleado(string nombre, int sueldo) : Persona(nombre){
    this->sueldo = sueldo;
}

//0.4
Empleado & Empleado::operator=(const Empleado & otro){
    sueldo = otro.sueldo;
    return *this;
}

//0.4
bool Empleado::cobrarACliente(Cliente& c){
    if (c.total_cuenta > 0){
        cout << nombre << "cobra al cliente " <<c.nombre << " un total de " << c.total_cuenta << "euros" << endl;
        c.total_cuenta = 0;
        return false;
    }
    cout << "La cuenta del cliente " << c.nombre << "es nula o invalida" << endl;
    return true;
}

//0.3
string Empleado::toString(){
    return  "Nombre: " + nombre +" Sueldo: " + to_string(sueldo) + "\nNombre de la empresa: " + nombre_empresa;
}