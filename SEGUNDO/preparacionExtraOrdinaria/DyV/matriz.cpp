int funcion(int **m, int x0, int x1, int y0, int y1) {
    if(x1-x0 == 1 && y1-y0 == 1) return m[x0][y0];

    else {
        int mcol = (y0+y1)/2;
        int mfil = (x0+x1)/2;
        int c1=funcion(m, x0, mfil, y0, mcol);
        int c2=funcion(m, mfil, x1, y0, mcol);
        int c3=funcion(m, x0, mfil, mcol, y1);
        int c4=funcion(m, mfil, x1, mcol, y1);

        if(c1!=-1 && c2!=-1 && c3!=-1 && c4!=-1 && c1==c2 && c1==c3 && c1==c4) {
            return c1+c2+c3+c4;
        }
        else return -1;
    }
}

int funcion(int **m, int n){
    return funcion(m, 0, n, 0, n);
}