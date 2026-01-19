#include "structss.h"

Info funcion(int *v, int i, int n) {

    // Caso base: subvector de un solo elemento
    if (n == 1) {
        Info res;
        res.suma = v[i];
        res.maximo = v[i];
        res.valido = true;
        return res;
    }

    // Divide
    Info izq = funcion(v, i, n/2);
    Info der = funcion(v, i + n/2, n/2);

    // Si alguna mitad no es válida, fallo
    if (!izq.valido || !der.valido) {
        Info res;
        res.valido = false;
        return res;
    }

    // Comprobación de la propiedad
    if (der.suma <= izq.maximo) {
        Info res;
        res.valido = false;
        return res;
    }

    // Combinar resultados
    Info res;
    res.suma = izq.suma + der.suma;
    res.maximo = (izq.maximo > der.maximo) ? izq.maximo : der.maximo;
    res.valido = true;

    return res;
}

// Función principal pedida en el enunciado
int resolver(int *v, int n) {
    Info res = funcion(v, 0, n);
    if (res.valido)
        return res.suma;
    else
        return -1;
}
