#include<iostream>
#include<list>
#include"objetomochila.h"
#include"problemamochila.h"
#include"solucionmochila.h"

using namespace std;


// comparison by name
bool compare_name(ObjetoMochila const & first, ObjetoMochila const & second) {

	return (first.getNombre() < second.getNombre());
}

// comparison by q
bool compare_q(ObjetoMochila const & first, ObjetoMochila const & second) {

	return (first.getQ() > second.getQ());
}

int main()
{
	ObjetoMochila obj1("Obj1", 21, 6, 2);
	ObjetoMochila obj2("Obj2", 30, 8, 2);
	ObjetoMochila obj3("Obj3", 76, 16, 2);
	ObjetoMochila obj4("Obj4", 48, 9, 2);
	obj1.mostrar();
	obj2.mostrar();
	obj3.mostrar();
	obj4.mostrar();
	list<ObjetoMochila> l;
	l.push_back(obj1);
	l.push_back(obj2);
	l.push_back(obj3);
	l.push_back(obj4);
	
	cout << endl << endl << "Lista añadida inicialmente: " << endl;
	list <ObjetoMochila>::iterator it = l.begin();
	while(it!=l.end())
	{
		it->mostrar();
		it++;
	}
	
	cout << endl << endl << "Lista ordenada por operador por defecto < (q): " << endl;
	l.sort();
	it = l.begin();
	while(it!=l.end())
	{
		it->mostrar();
		it++;
	}
	
//	cout << endl << endl << "Lista ordenada por nombre: " << endl;
//	l.sort(compare_name);
//	it = l.begin();
//	while(it!=l.end())
//	{
//		it->mostrar();
//		it++;
//	}
	
//	cout << endl << endl << "Lista ordenada por nombre: " << endl;
//	//Comprobar con compare_name y ver que ocurre
//	l.sort(compare_name);
//	it = l.begin();
//	while(it!=l.end())
//	{
//		it->mostrar();
//		it++;
//	}
	
	ProblemaMochila p(l,45);
	SolucionMochila s = p.ejecutaVoraz();
	cout << endl << endl <<  "Solucion Mochila Voraz Recursivo Ordenado:" << endl;
	s.mostrar();
	
	
	ProblemaMochila p2(l,45);
	SolucionMochila s2 = p2.ejecutaBacktracking();
	cout << endl << endl <<  "Solucion Mochila Backtraking Ordenado:" << endl;
	s2.mostrar();
		
	
}
