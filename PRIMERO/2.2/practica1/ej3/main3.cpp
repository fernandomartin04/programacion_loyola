#include "ejercicio2.h"

int main() {
    int totalSegundos = 3671;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    segundosAHorario(totalSegundos, horas, minutos, segundos);
    cout << horas << " : " << minutos << " : " << segundos << endl;

    return 0;
}