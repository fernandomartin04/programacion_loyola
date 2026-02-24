#include "cabecera.h"

int main() {
    Luz l1;
    string color;
    
    cout << "Color inicial: " << l1.getColor() << endl;
    l1.iniciarSemaforo();

    cout << "Color Actual, tras iniciar: " << l1.getColor() << endl;
    l1.cambioDeColor();
    cout << "Probamos funcion cambio de color: " << l1.getColor() << endl;
    l1.cambioDeColor();
    cout << "Probamos funcion cambio de color x2: " << l1.getColor() << endl;
    l1.cambioDeColor();
    cout << "Probamos funcion cambio de color x3: " << l1.getColor() << endl;


    return 0;
}