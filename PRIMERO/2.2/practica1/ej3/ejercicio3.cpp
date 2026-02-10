#include "ejercicio2.h"

void segundosAHorario(int totalSegundos, int& horas, int& minutos, int& segundos) {
    segundos = totalSegundos % 60;
    totalSegundos /= 60;
    minutos = totalSegundos % 60;
    totalSegundos /= 60;
    horas = totalSegundos % 60;
}