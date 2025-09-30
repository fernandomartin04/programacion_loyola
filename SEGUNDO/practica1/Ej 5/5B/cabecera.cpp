#include "cabecera.h"
#include <cstdlib>
using namespace std;

static void dividirCadena(const string& str, char delim, string partes[], int& count) {
    count = 0;
    size_t inicio = 0;
    for (size_t pos = str.find(delim); pos != string::npos; pos = str.find(delim, inicio)) {
        partes[count++] = str.substr(inicio, pos - inicio);
        inicio = pos + 1;
    }
    partes[count++] = str.substr(inicio);
}

Pelicula::Pelicula(const string& datos) {
    string partes[5];
    int count = 0;
    dividirCadena(datos, '&', partes, count);

    if (count != 5)
        throw invalid_argument("Formato incorrecto");

    titulo = partes[0];
    director = partes[1];
    codigoIMDB = partes[2];
    duracion = atoi(partes[3].c_str());
    presupuesto = atof(partes[4].c_str());

    if (codigoIMDB.length() != 9)
        throw invalid_argument("Código IMDB inválido");

    if (duracion <= 0)
        throw invalid_argument("Duración inválida");
}
