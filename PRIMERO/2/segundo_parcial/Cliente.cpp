#include"Cliente.h"

//0.3
Cliente::Cliente(): Persona(){
    total_cuenta = 0;
}

//0.3
Cliente::Cliente(string nombre) : Persona(nombre){
    total_cuenta = 0;
}


//0.3
Cliente& Cliente::operator+=(const int & cantidad){
    total_cuenta += cantidad;
    return *this;
}

//0.3
Cliente& Cliente::operator-=(const int & cantidad){
    total_cuenta -= cantidad;
    return *this;
}

//0.2
int Cliente::getTotalCuenta(){
    return total_cuenta;
}

//0.3
string Cliente::toString(){
    return "Nombre: " + nombre + " Total cuenta: " + to_string(total_cuenta);
}