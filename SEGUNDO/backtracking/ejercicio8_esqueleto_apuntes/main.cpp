#include<iostream>
#include<list>
#include<set>
#include"problemareina.h"

using namespace std;

int main()
{
	int n;
	cout << "Introduzca el numero de reinas: ";
	cin >> n;
	
	ProblemaReina p1(n);
	list <SolucionReina> l1 = p1.ejecutaVoraz();
	if(p1.getNumSoluciones()!=0)
	{
		list <SolucionReina>::iterator it = l1.begin();
		cout << "El algoritmo voraz ha encontrado " << p1.getNumSoluciones() << endl;
		while(it!=l1.end())
		{
			it->mostrar();
			it++;
		}
	}
	else
	{
		cout << "El algoritmo voraz no ha encontrado solucion" << endl;
	}
	
	ProblemaReina p2(n);
	list <SolucionReina> l2 = p2.ejecutaBacktracking();
	if(p2.getNumSoluciones()!=0)
	{
		list <SolucionReina>::iterator it2 = l2.begin();
		cout << "El algoritmo backtraking ha encontrado " << p2.getNumSoluciones() << " soluciones" << endl;
		int i=1;
		while(it2!=l2.end())
		{
			cout << "Solucion " << i << ": " << endl;
			it2->mostrar();
			it2++;
			i++;
		}
	}
	else
	{
		cout << "El algoritmo backtraking no ha encontrado solucion" << endl;
	}

	return 0;
}
