#include <string>
#include <map>
#include <list>
#include <iostream>
using namespace std;

void leerMapa(map<string, int>& personas);
void mostrarMapa(const map<string, int>& personas);

void eliminarPorEdad(map<string, int>& personas, int edadMinima);
map<string, int> primosMap(const map<string, int>& personas);
list<string> obtenerNombresEdadMaxima(const map<string, int>& personas);
map<int, list<string>>invertidoMap(const map<string, int>& personas);
