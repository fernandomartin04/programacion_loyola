#include<iostream>
#include"problemasubconjuntos.h"

using namespace std;

int main()
{
	set <Numero> elementos;
	//elementos.insert(Numero(-5));
	//elementos.insert(Numero(-6));
	elementos.insert(Numero(7));
	elementos.insert(Numero(11));
	elementos.insert(Numero(13));
	elementos.insert(Numero(24));
	int suma = 31;
	
	cout << "Tratamos de buscar la suma de " << suma << " con el conjunto: ";
	cout << "{ ";
	set <Numero>::const_iterator it=elementos.begin();
	while(it!=elementos.end())
	{
		it->mostrar();
		cout << " ";
		it++;
	}
	cout << "}" << endl;


	cout << endl << "Algoritmo voraz ********************" << endl;
	ProblemaSubconjuntos p1(elementos,suma);
	list <SolucionSubconjuntos> l1 = p1.ejecutaVoraz();
	cout << "Se han encontrado " << l1.size() << " soluciones: " << endl;
	list <SolucionSubconjuntos>::iterator it1 = l1.begin();
	while(it1!=l1.end())
	{
		it1->mostrar();
		it1++;
	}
	
	cout << endl << "Algoritmo backtracking *************" << endl;
	ProblemaSubconjuntos p2(elementos,suma);
	list <SolucionSubconjuntos> l2 = p2.ejecutaBacktracking();
	cout << "Se han encontrado " << l2.size() << " soluciones: " << endl;
	list <SolucionSubconjuntos>::iterator it2 = l2.begin();
	while(it2!=l2.end())
	{
		it2->mostrar();
		it2++;
	}
	return 0;
}
