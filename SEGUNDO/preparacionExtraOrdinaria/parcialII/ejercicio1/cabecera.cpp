#include<iostream>
#include<cmath>
#include"cabecera.h"

using namespace std;

//TODO apartado a) mario4
long int mario4(long int u, long int v, long int n) {
    long int a, b, c, d;
    long int t1, t2, t3, t4;
    if(n==1) return u*v;
    else {
        a = u/int(pow(10, n/2));
        b = u%int(pow(10, n/2));
        c = v/int(pow(10, n/2));
        d = v%int(pow(10, n/2));
        
        t1 = mario4(a, c, n/2);
        t2 = mario4(a, d, n/2);
        t3 = mario4(b, c, n/2);
        t4 = mario4(b, d, n/2);

        return t1*pow(10, n) + (t2 + t3)*pow(10, n/2) + t4;
    }
}
//TODO apartado b) luigi3
long int luigi3(long int u, long int v, long int n) {
    long int a, b, c, d;
    long int t1, t2, t3;
    if(n == 1) {
        return u*v;
    }
    else{
        a = u/int(pow(10, n/2));
        b = u%int(pow(10, n/2));
        c = v/int(pow(10, n/2));
        d = v%int(pow(10, n/2));

        t1 = luigi3(a, c, n/2);
        t2 = luigi3((a-b), (d-c), n/2);
        t3 = luigi3(b, d, n/2);
    }
    return (pow(10, n) + pow(10, n/2))*t1 + pow(10, n/2)*t2 + (pow(10, n/2) + 1)*t3;
}
