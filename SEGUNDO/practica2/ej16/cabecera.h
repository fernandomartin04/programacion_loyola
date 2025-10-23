#include <iostream>
using namespace std;
#include <list>

bool esPrimo(int n);
list<int> funcionNoFinalAux(int n, int i);
list<int> funcionNoFinal(int n);
list<int> funcionFinalAux(int n, int i, list<int> acum);
list<int> funcionFinal(int n);
list<int> funcionIterativa(int n);