#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
using namespace std;

class Luz {
    private:
        string color;
    public:
        Luz(string color = "Rojo") {
            this->color=color;
        }

        string getColor() const;
        void iniciarSemaforo();
        void cambioDeColor();
};

#endif