#include<iostream>
#include"cabecera.h"

using namespace std;

int main()
{

	Persona * v = new Persona[10];
	v[0]=Persona("Teresa",41);
	v[1]=Persona("Alba",12);
	v[2]=Persona("Ana",26);
	v[3]=Persona("Maria", 15);
	v[4]=Persona("Carmen", 52);
	v[5]=Persona("Juan", 18);
	v[6]=Persona("Antonio", 28);
	v[7]=Persona("Pedro", 39);
	v[8]=Persona("Daniel", 45);
	v[9]=Persona("Erik",4);
	
	mostrarPersonas(v,10);
	
	
	par p=minimoMaximo(v,10);
	cout << endl << "Minimo: " << endl;
	p.min.mostrar();
	cout << endl << "Maximo: " << endl;
	p.max.mostrar();
	
	delete [] v;
	
	return 0;
}