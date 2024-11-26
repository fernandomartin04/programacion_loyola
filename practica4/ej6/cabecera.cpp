#include<iostream>
#include"cabecera.h"
using namespace std;

void introducir(int v[], int n){

	for (int i = 0; i<n; i++){
		cout << "Introduce el valor " << i << endl;
		cin >> v[i];
	}
}

void mostrar(int v[], int n){

	for (int i=0; i<n; i++){
		cout << v[i] << " ";
	}
	cout << endl;

}

float suma(int v[], int n){

	float sum = 0.0;
	for (int i = 0; i<n; i++){
		sum += v[i];
	}
	return sum;

}

float media(int v[], int n) {
	float media = (suma(v, n)) / n;
	return media;
}

float varianza(int v[], int n){
	float varianza = 0.0;
	float m = media(v,n);
	for (int i= 0; i < n; i++){
		varianza += (v[i] - m) * (v[i] - m);
	}
	varianza /= n;
	return varianza; 
}

void max(int v[], int n){

	int mx = 0;
	
	for (int i = 0; i < n; i++){
		if (v[i] > mx){
			mx = v[i];
		}
	}
	cout << "El valor maximo del vector es: " << mx << endl;
}

void min(int v[], int n){

	int mn = 0;
	
	for (int i = 0; i < n; i++){
		if (v[i] < mn){
			mn = v[i];
		}
	}
	cout << "El valor minimo del vector es: " << mn << endl;
}

