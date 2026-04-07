#include <iostream>
#include "Puntaje.h"
#include "Escala.h"

using namespace std;

int main(){

    Puntaje p1(10);
    Puntaje p2(20);

    // operador +
    Puntaje p3 = p1 + p2;
    cout << p3 << endl;

    // operator +=
    p1 += p2;
    cout << p1 << endl;

    // operator += int
    p1 += 5;
    cout << p1 << endl;

    // operator -=
    p1 -= 3;
    cout << p1 << endl;

    // comparadores
    if(p1 > p2)
        cout << "p1 es mayor" << endl;

    if(p1 < p2)
        cout << "p1 es menor" << endl;

    // empate
    if(esEmpate(p1, p2))
        cout << "Empate" << endl;

    // operador >>
    cout << "Introduce un puntaje: ";
    cin >> p2;
    cout << p2 << endl;

    // clase amiga
    Escala e(0, 50);
    e.escalar(p2);
    cout << "Escalado: " << p2 << endl;

    return 0;
}