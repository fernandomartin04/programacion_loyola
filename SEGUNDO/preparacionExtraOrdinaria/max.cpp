Info funcion(int *v, int i, int n) {
    if(n==1) {
        Info s;
        s.suma = v[i];
        s.maximo = v[i];
        s.valido = true;
        return s;
    }

    Info izq=funcion(v, i, n/2);
    Info der=funcion(v, i+n/2, n/2);

    if(!izq.valido || !der.valido) {
        Info s;
        s.valido = false;
        return s;
    }
    if(der.maximo > izq.suma / (n/2)) {
        Info s;
        s.valido = true;
        s.suma = izq.suma + der.suma;
        s.maximo = (izq.maximo, der.maximo);
        return s;
    }
    Info s;
    s.valido = false;
    return s;

}


int resolver(int *v, int n) {
    Info s = funcion(v, 0, n);
    if(!s.valido) {
        return -1;
    }
    else return s.suma;
}