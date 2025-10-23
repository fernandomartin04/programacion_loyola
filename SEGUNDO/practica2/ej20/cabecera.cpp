#include "cabecera.h"


long int funcionRecursiva(int n) {
    if (n < 3) return n * n;  
    return 2 * funcionRecursiva(n - 1) - funcionRecursiva(n - 2) + funcionRecursiva(n - 3);
}


long int funcionIterativa(int n) {
    if (n < 3) return n * n;

    long int g0 = 0;  
    long int g1 = 1;  
    long int g2 = 4;  
    long int g3;

    for (int i = 3; i <= n; i++) {
        g3 = 2 * g2 - g1 + g0;
        g0 = g1;
        g1 = g2;
        g2 = g3;
    }
    return g3;
}
