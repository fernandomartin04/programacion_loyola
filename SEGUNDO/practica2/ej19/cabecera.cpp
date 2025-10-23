#include "cabecera.h"


resultado divisionNF(int A, int B) {
    if (A < B) return {0, A}; 

    resultado r = divisionNF(A - B, B); 
    r.S += 1; 
    return r;
}


resultado divisionFAux(int A, int B, int S) {
    if (A < B) return {S, A}; 
    return divisionFAux(A - B, B, S + 1);
}

resultado divisionF(int A, int B) {
    return divisionFAux(A, B, 0);
}


resultado divisionI(int A, int B) {
    int S = 0;
    while (A >= B) { 
        A -= B;
        S++;
    }
    resultado r;
    r.S = S;
    r.R = A; 
    return r;
}
