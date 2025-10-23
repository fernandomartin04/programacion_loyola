#include "cabecera.h"
#include <climits> 


resultado funcionNoFinal(int n) {
    if (n == 0) return {0, 0, 0};

    resultado r = funcionNoFinal(n / 10);
    int digito = n % 10;

    if (digito % 2 == 0)  
        r.suma += digito * digito;
    else                  
        r.nImpares++;

    if (r.minimo == 0) r.minimo = digito; 
    else if (digito < r.minimo) r.minimo = digito;

    return r;
}


resultado funcionFinalAux(int n, int suma, int impares, int minimo) {
    if (n == 0) return {suma, impares, minimo};

    int digito = n % 10;
    if (digito % 2 == 0)
        suma += digito * digito;
    else
        impares++;

    if (minimo == -1 || digito < minimo)
        minimo = digito;

    return funcionFinalAux(n / 10, suma, impares, minimo);
}

resultado funcionFinal(int n) {
    if (n == 0) return {0, 0, 0};
    return funcionFinalAux(n, 0, 0, -1);
}


resultado funcionIterativa(int n) {
    if (n == 0) return {0, 0, 0};

    int suma = 0;
    int impares = 0;
    int minimo = 9;

    while (n > 0) {
        int digito = n % 10;

        if (digito % 2 == 0)
            suma += digito * digito;
        else
            impares++;

        if (digito < minimo)
            minimo = digito;

        n /= 10;
    }

    resultado r;
    r.suma = suma;
    r.nImpares = impares;
    r.minimo = minimo;
    return r;
}
