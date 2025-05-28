#include "ejercicio2.h"
#include <iostream>
#include <queue>  
#include <queue>
using namespace std;

int main() {
    queue<Asignatura> grados;
	

	for (int i = 1; i < 5 ; i++) {
		grados.push(Asignatura("Programacion", 1, i, i+2));
	}
	
	while(!grados.empty()) {
		Asignatura a = grados.front();
		cout << a.toString() << endl;
		grados.pop();
	}


    return 0;
}

