int funcion(int *v, int i, int n) {
    if(n==1) return v[i];
    else {
        int izq=funcion(v, i, n/2);
        int der=funcion(v, i+n/2, n/2);
        if(izq != -1 && der != -1 && izq==der) return izq+der;
        else return -1;
    }
}