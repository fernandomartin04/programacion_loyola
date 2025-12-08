#include<iostream>
#include<cmath>
#include"cabecera.h"

using namespace std;

//TODO apartado a) mario4
long int mario4(long int u, long int v, long int n){
	if(n==1) return u*v;
	long int a = u/pow(10,n/2);
	long int b = u%(int)pow(10,n/2);
	long int c = v/pow(10,n/2);
	long int d = v%(int)pow(10,n/2);
	long int ac = mario4(a,c,n/2);
	long int ad = mario4(a,d,n/2);
	long int bc = mario4(b,c,n/2);
	long int bd = mario4(b,d,n/2);
	return ac * pow(10,n) + (ad + bc)*pow(10,n/2)+bd;
}
//TODO apartado b) luigi3
/*
long int luigi3(long int u, long int v, long int n)
{
	long int a, b, c, d;
	long int t1, t2, t3;
	if(n==1)
	{
		return u*v;
	}
	else
	{
		a = u / int(pow(10,n/2));
		b = u % int(pow(10,n/2));
		c = v / int(pow(10,n/2));
		d = v % int(pow(10,n/2));
		t1 = mario4(a,c,n/2);
		t2 = mario4(a-b,d-c,n/2);
		t3 = mario4(b,d,n/2);
		return (int(pow(10,n))+int(pow(10,n/2)))*t1 + int(pow(10,n/2))*t2 + (int(pow(10,n/2))+1)*t3;
	}
}

*/