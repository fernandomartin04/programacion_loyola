#include "ejercicio1.h"
#include <iostream>
#include <stack>  
using namespace std;

int main() {
    stack<Asignatura> asignaturas;

    // 5 asignaturas inicializadas a mano (puedes usar tus asignaturas reales)
    asignaturas.push(Asignatura("Programacion", 1, 7.5));
    asignaturas.push(Asignatura("Bases de Datos", 2, 6.8));
    asignaturas.push(Asignatura("Sistemas Operativos", 3, 8.2));
    asignaturas.push(Asignatura("Matematicas", 4, 9.1));
    asignaturas.push(Asignatura("Fisica", 5, 7.0));

    // Mostramos todas las asignaturas
	while(!asignaturas.empty()) {
		cout << asignaturas.top().toString() << endl;
		asignaturas.pop();
	}

    return 0;
}

