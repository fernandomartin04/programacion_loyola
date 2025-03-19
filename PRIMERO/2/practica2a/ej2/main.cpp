#include <iostream> 
#include "cabecera.h" 
using namespace std; 
int main() { 
// Crear el semáforo 
Luz semaforo; 

// Mostrar color inicial 
cout << "Color inicial: " << semaforo.getColor() << endl; 

// Cambiar de color varias veces 
semaforo.cambioDeColor(); 
cout << "Nuevo color: " << semaforo.getColor() << endl; 

semaforo.cambioDeColor(); 
cout << "Nuevo color: " << semaforo.getColor() << endl; 


semaforo.cambioDeColor(); 
cout << "Nuevo color: " << semaforo.getColor() << endl; 

return 0; 

}