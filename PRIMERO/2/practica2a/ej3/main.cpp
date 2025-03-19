#include <iostream> 
#include "cabecera.h" 
using namespace std; 

int main() { 
// Creo un número complejo
NumComplejos num(5, 6);
cout << "Numero complejo inicial: " << num.getReal() << " + " << num.getImag() << "i" << endl; 

// Sumo 2 a la parte real 
num.sumarReal(2); 
cout << "Despues de sumar 2 a la parte real: " << num.getReal() << " + " << num.getImag() << "i" << endl; 

// Multiplico parte real por 3 
num.multiplicarReal(3); 
cout << "Despues de multiplicar la parte real por 3: " << num.getReal() << " + " << num.getImag() << "i" << endl; 

// Obtengo módulo del número complejo 
cout << "Modulo del numero complejo: " << num.obtenerModulo() << endl; 

return 0; 

}