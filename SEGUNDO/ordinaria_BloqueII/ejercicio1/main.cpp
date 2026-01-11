#include<iostream>
#include<cstdlib>
#include"robot.h"

using namespace std;

//Declaracion de funciones auxiliares para el correcto funcionamiento del main (NO TOCAR)
Robot * reservarMemoria(int n);
void rellenaVector1(Robot * v, int n);
void rellenaVector2(Robot * v, int n);
void rellenaVector3(Robot * v, int n);
void rellenaVector4(Robot * v, int n);
void rellenaVector5(Robot * v, int n);
void mostrarVector(Robot *v, int n);

//Funcion principal
int main()
{
	/*TODO Descomentar cuando tenga implementado el apartado a)
	int n=8;
	Robot * v1 = reservarMemoria(n);
	Robot * v2 = reservarMemoria(n);
	Robot * v3 = reservarMemoria(n);
	Robot * v4 = reservarMemoria(n);
	Robot * v5 = reservarMemoria(n);
	
	rellenaVector1(v1,n);
	rellenaVector2(v2,n);
	rellenaVector3(v3,n);
	rellenaVector4(v4,n);
	rellenaVector5(v5,n);
	
	cout << endl <<"Primera fila: " << endl; mostrarVector(v1,n);
	cout << endl <<"Segunda fila: " << endl; mostrarVector(v2,n);
	cout << endl <<"Tercera fila: " << endl; mostrarVector(v3,n);
	cout << endl <<"Cuarta fila: " << endl; mostrarVector(v4,n);
	cout << endl <<"Quinta fila: " << endl; mostrarVector(v5,n);
	*/
	
	/*TODO Descomentar cuando tenga implementado el apartado b)
	int n1 = dobleCargaBateria(v1,0,n);
	int n2 = dobleCargaBateria(v2,0,n);
	int n3 = dobleCargaBateria(v3,0,n);
	int n4 = dobleCargaBateria(v4,0,n);
	int n5 = dobleCargaBateria(v5,0,n);
	
	cout << endl << "El resultado de la primera fila es: " << n1 << endl;
	cout << "El resultado de la segunda fila es: " << n2 << endl;
	cout << "El resultado de la tercera fila es: " << n3 << endl;
	cout << "El resultado de la cuarta fila es: " << n4 << endl;
	cout << "El resultado de la quinta fila es: " << n5 << endl << endl;
	*/
	
	/*TODO Descomentar cuando tenga implementado el apartado a)
	delete [] v1;
	delete [] v2;
	delete [] v3;
	delete [] v4;
	delete [] v5;
	*/
	
	return 0;
}

//Definicion de funciones auxiliares para el correcto funcionamiento del main (NO TOCAR)
Robot * reservarMemoria(int n)
{
	Robot * v = NULL;
	v=new Robot[n];
	if(v==NULL)
	{
		cout << "No se ha podido reservar Memoria" << endl;
		exit(-1);
	}
	return v;
}

void rellenaVector1(Robot * v, int n)
{
	v[0]=Robot("R1",1);
	v[1]=Robot("R2",2);
	v[2]=Robot("R3",2);
	v[3]=Robot("R4",4);
	v[4]=Robot("R5",2);
	v[5]=Robot("R6",4);
	v[6]=Robot("R7",4);
	v[7]=Robot("R8",8);
}

void rellenaVector2(Robot * v, int n)
{
	v[0]=Robot("R1",3);
	v[1]=Robot("R2",6);
	v[2]=Robot("R3",6);
	v[3]=Robot("R4",12);
	v[4]=Robot("R5",6);
	v[5]=Robot("R6",12);
	v[6]=Robot("R7",12);
	v[7]=Robot("R8",24);
}

void rellenaVector3(Robot * v, int n)
{
	v[0]=Robot("R1",3);
	v[1]=Robot("R2",6);
	v[2]=Robot("R3",6);
	v[3]=Robot("R4",12);
	v[4]=Robot("R5",3);
	v[5]=Robot("R6",6);
	v[6]=Robot("R7",6);
	v[7]=Robot("R8",12);
}

void rellenaVector4(Robot * v, int n)
{
	v[0]=Robot("R1",3);
	v[1]=Robot("R2",6);
	v[2]=Robot("R3",3);
	v[3]=Robot("R4",6);
	v[4]=Robot("R5",4);
	v[5]=Robot("R6",8);
	v[6]=Robot("R7",4);
	v[7]=Robot("R8",8);
}

void rellenaVector5(Robot * v, int n)
{
	v[0]=Robot("R1",3);
	v[1]=Robot("R2",7);
	v[2]=Robot("R3",2);
	v[3]=Robot("R4",1);
	v[4]=Robot("R5",5);
	v[5]=Robot("R6",2);
	v[6]=Robot("R7",1);
	v[7]=Robot("R8",24);
}

void mostrarVector(Robot *v, int n)
{
	for(int i=0; i<n; i++)
	{
		v[i].show();
		cout << " ";
	}
	cout << endl;
}
