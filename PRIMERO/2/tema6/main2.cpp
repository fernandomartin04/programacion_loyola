#include "ejercicio2.h"
#include <iostream>
#include <stack>  
#include <vector>
using namespace std;

int main() {
    stack<Asignatura> curso1, curso2, curso3, curso4;
	

    // 5 asignaturas inicializadas a mano (puedes usar tus asignaturas reales)
    curso1.push(Asignatura("Programacion", 1, 1, 7.5));
    curso1.push(Asignatura("Bases de Datos", 2, 1, 6.8));
    curso1.push(Asignatura("Sistemas Operativos", 2, 1, 8.2));
    curso1.push(Asignatura("Matematicas", 1, 1, 9.1));
    curso1.push(Asignatura("Fisica", 2, 1, 7.0));

	curso2.push(Asignatura("Programacion", 1, 2, 7.5));
    curso2.push(Asignatura("Bases de Datos", 2, 2, 6.8));
    curso2.push(Asignatura("Sistemas Operativos", 2, 2, 8.2));
    curso2.push(Asignatura("Matematicas", 1, 2, 9.1));
    curso2.push(Asignatura("Fisica", 2, 2, 7.0));

	curso3.push(Asignatura("Programacion", 1, 3, 7.5));
    curso3.push(Asignatura("Bases de Datos", 2, 3, 6.8));
    curso3.push(Asignatura("Sistemas Operativos", 2, 3, 8.2));
    curso3.push(Asignatura("Matematicas", 1, 3, 9.1));
    curso3.push(Asignatura("Fisica", 2, 3, 7.0));
	
    curso4.push(Asignatura("Isi", 2, 4, 7.0));
    curso4.push(Asignatura("Estadistica", 2, 4, 6.8));
    curso4.push(Asignatura("Matematicas", 2, 4, 5.2));
    curso4.push(Asignatura("Programacion", 2, 4, 9.3));
    curso4.push(Asignatura("Fisica", 2, 4, 5.0));

	vector<stack<Asignatura>> grados;
	grados.push_back(curso1);
	grados.push_back(curso2);
	grados.push_back(curso3);
	grados.push_back(curso4);
	
	for (int i = 0; i < grados.size(); i++) {
		cout << "\nCurso " << i+1 << "\n";
		while(!grados[i].empty()) {
			Asignatura a = grados[i].top();
			grados[i].pop();
			// Dentro del bucle:
			float random_dificultad = rand() % 11;  // Números entre 0 y 10 enteros
			a.setDificultad(random_dificultad);

			cout << a.toString() << endl;
		}
	}

	

    return 0;
}

