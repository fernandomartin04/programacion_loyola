#include "droide.h"
#include <iostream>
using namespace std;

int main() {

    cout << "=== PRUEBA 1: VECTOR QUE SI CUMPLE ===\n";

    Droide ok[] = {
        Droide(1,0,1),
        Droide(2,0,3),
        Droide(3,0,2),
        Droide(4,0,6),
        Droide(5,0,2),
        Droide(6,0,6),
        Droide(7,0,1),
        Droide(8,0,3)
    };

    int r1 = potenciaTriple(ok, 0, 8);

    if(r1 == -1)
        cout << "NO cumple la propiedad\n\n";
    else
        cout << "Potencia total = " << r1 << "\n\n";


    cout << "=== PRUEBA 2: VECTOR QUE NO CUMPLE ===\n";

    Droide wrong[] = {
        Droide(1,0,1),
        Droide(2,0,3),
        Droide(3,0,2),
        Droide(4,0,100),   // rompe la propiedad
        Droide(5,0,4),
        Droide(6,0,12),
        Droide(7,0,8),
        Droide(8,0,24)
    };

    int r2 = potenciaTriple(wrong, 0, 8);

    if(r2 == -1)
        cout << "NO cumple la propiedad\n";
    else
        cout << "Potencia total = " << r2 << "\n";

    return 0;
}
