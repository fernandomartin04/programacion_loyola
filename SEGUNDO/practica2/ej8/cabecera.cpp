#include "cabecera.h"

string funcionNoFinal(const string *v, int n) {
    if (n == 0) return "";
    if (n == 1) return *v;
    string resto = funcionNoFinal(v + 1, n - 1);
    if (v->size() >= resto.size()) return *v;
    else return resto;
}

string funcionFinalAux(const string *v, int n, string mayor) {
    if (n == 0) return mayor;
    if (v->size() > mayor.size()) mayor = *v;
    return funcionFinalAux(v + 1, n - 1, mayor);
}

string funcionFinal(const string *v, int n) {
    if (n == 0) return "";
    return funcionFinalAux(v + 1, n - 1, *v);
}

string funcionI(const string *v, int n) {
    if (n == 0) return "";
    string mayor = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i].size() > mayor.size()) mayor = v[i];
    }
    return mayor;
}
