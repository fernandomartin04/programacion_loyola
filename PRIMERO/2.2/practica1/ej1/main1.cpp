#include "ejercicio1.h"

int main() {

    rastrearLLamadas();
    rastrearLLamadas();
    rastrearLLamadas();
    // La funcion vuelve a ser 1 si quitamos static, porque no se guarda en ningun sitio el valor
    return 0;
}