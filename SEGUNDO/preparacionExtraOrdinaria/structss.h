#ifndef FUNCION_H
#define FUNCION_H

struct Info {
    int suma;
    int maximo;
    bool valido;
};

Info funcion(int *v, int i, int n);

int resolver(int *v, int n);

#endif
