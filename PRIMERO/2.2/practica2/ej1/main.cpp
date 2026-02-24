#include "cabecera.h"

int main() {
    Rectangulo r1;
    double ancho;
    float alto;
    
    r1.setAncho(5.0);
    r1.setAlto(8.0);

    cout << "Alto: " << r1.getAlto() << endl;
    cout << "Ancho: " << r1.getAncho() << endl;

    cout << "Cambiamos valores..." << endl;
    cout << "Introduce alto: " << endl;
    
    cin >> alto;
    cout << "Introduce ancho: " << endl;
    cin >> ancho;

    r1.cambiarAltoAncho(alto, ancho);

    cout << "Altura: " << r1.getAlto() << " Ancho: " << r1.getAncho() << endl; 


    return 0;
}