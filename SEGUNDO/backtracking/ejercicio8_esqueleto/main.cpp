#include<iostream>
#include"problemarecubrimiento.h"

using namespace std;

int main()
{
	set <int> c1 = {1,2,3};
	set <int> c2 = {1,2};
	set <int> c3 = {3,4,5};
	set <int> c4 = {3,4};
	set <int> c5 = {5};
	
	Subconjunto s1(c1,30);
	Subconjunto s2(c2,22);
	Subconjunto s3(c3,40);
	Subconjunto s4(c4,25);
	Subconjunto s5(c5,50);
	
	list <Subconjunto> sub_disponibles = {s1,s2,s3,s4,s5};
	sub_disponibles.sort();
	
	ProblemaRecubrimiento p1(sub_disponibles);
	ProblemaRecubrimiento p2(sub_disponibles);
	
	cout << endl << "Voraz: " << endl;
	SolucionRecubrimiento sol1 = p1.ejecutaVoraz();
	sol1.mostrar();
	
	cout << endl << "Backtracking: " << endl;
	SolucionRecubrimiento sol2 = p2.ejecutaBacktracking();
	sol2.mostrar();
	
	return 0;

}
