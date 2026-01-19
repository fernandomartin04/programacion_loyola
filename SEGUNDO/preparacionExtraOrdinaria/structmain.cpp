#include <iostream>
#include "structss.h"

using namespace std;

int main() {

    int v1[] = {1, 2, 10, 20};  
    // Izq: suma=3, max=2
    // Der: suma=30 → 30 > 2 ✔

    int v2[] = {1, 5, 3, 4};   
    // Izq: suma=6, max=5
    // Der: suma=7 → 7 > 5 ✔
    // Pero en subniveles falla

    cout << "Vector 1: " << resolver(v1, 4) << endl;
    cout << "Vector 2: " << resolver(v2, 4) << endl;

    return 0;
}
