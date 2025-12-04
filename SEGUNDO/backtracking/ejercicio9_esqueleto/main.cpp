#include<iostream>
#include"problematareas.h"

using namespace std;

void showList(list <Tarea> const & l)
{
	list <Tarea>::const_iterator it = l.begin();
	while(it!=l.end())
	{
		it->mostrar();
		it++;
	}
}

int main()
{
	Tarea t1(1,10);
	Tarea t2(2,14);
	Tarea t3(3,20);
	Tarea t4(4,21);
	Tarea t5(5,10);
	Tarea t6(6,12);
	
	list <Tarea> l = {t1, t2, t3, t4, t5, t6};
	cout << "Mostramos la lista de tareas introducidas: " << endl;
	showList(l);
	
	//TODO probar el algoritmo sin ordenar, es decir, comentando l.sort()
	cout << endl << "Ordenamos la lista segun nuestro criterio de ordenacion de la clase Tarea:" << endl;
	l.sort();
	showList(l);
	
	int n = 3;
	cout << endl << "Algoritmo Voraz **********************" << endl;
	ProblemaTareas p1(l,n);
	SolucionTareas s1 = p1.ejecutaVoraz();
	s1.mostrar();
	
	cout << endl << "Algoritmo Backtracking ***************" << endl;
	ProblemaTareas p2(l,n);
	SolucionTareas s2 = p2.ejecutaBacktracking();
	s2.mostrar();
	
	return 0;
}
