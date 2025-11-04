#include<iostream>
#include"cabecera.h"

using namespace std;

//TODO Apartado c) Funcion recursiva multiple
double funcionR(double n){
	if(n < 2){
		return 1;
	}
	else{
		return (2*n+1)/(n+2)*funcionR(n-1) + (3*n-3)/(n+2)*funcionR(n-2);
	}
}

//TODO Apartado d) Funcion iterativa
double funcionI(double n){
	double n_2 = 1, n_1 = 1;
	double suma;
	double i = 0;
	while(i<n){
		suma = (2*(i+2)+1)/((i+2)+2)*n_1 + (3*(i+2)-3)/((i+2)+2)*n_2;
		n_2 = n_1;
		n_1 = suma;
		i++;
	}
	return n_2;
}
