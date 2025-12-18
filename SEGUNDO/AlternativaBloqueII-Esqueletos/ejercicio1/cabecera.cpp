#include<iostream>
#include<cmath>
#include"cabecera.h"

using namespace std;

//TODO apartado a) mario4

long int mario4(long int u, long int v, long int n) {
	if(n==1) return u*v;
	else {
		long int a = u / int(pow(10, n/2));
		long int b = u % int(pow(10, n/2));
		long int c = v / int(pow(10, n/2));
		long int d = v % int(pow(10, n/2));

		long int multi1 = mario4(a, c, n/2);
		long int multi2 = mario4(a, d, n/2);
		long int multi3 = mario4(b, c, n/2);
		long int multi4 = mario4(b, d, n/2);
		return pow(10, n)*multi1 + (multi2+multi3)*pow(10, n/2)+multi4;
	}	
}

//TODO apartado b) luigi3

long int luigi3(long int u, long int v, long int n) {
	if (n==1) return u*v;
	else {
		long int a = u / int(pow(10, n/2));
		long int b = u % int(pow(10, n/2));
		long int c = v / int(pow(10, n/2));
		long int d = v % int(pow(10, n/2));

		long int multi1 = luigi3(a, c, n/2);
		long int multi2 = luigi3(a-b, d-c, n/2);
		long int multi3 = luigi3(b, d, n/2);
		
		return (pow(10, n)+pow(10, n/2))*multi1 + (multi2)*pow(10, n/2) + (pow(10, n/2)+1)*multi3;
	}
}

