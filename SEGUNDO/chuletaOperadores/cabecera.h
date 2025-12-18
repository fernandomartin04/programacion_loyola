#ifndef COCINERO_H
#define COCINERO_H

#include <iostream>
#include <string>

using namespace std;

class Cocinero {
private:
    string nombre;
    int ingredientes;

public:
    Cocinero(string n = "", int ing = 0) : nombre(n), ingredientes(ing) {}

    // ---- GETTERS (final) ----
    string getNombre() const { return nombre; }
    int getIngredientes() const { return ingredientes; }

    // ---- SETTERS ----
    void setNombre(string n) { nombre = n; }
    void setIngredientes(int ing) { ingredientes = ing; }

    // ---- OPERATOR = ----
    Cocinero & operator=(const Cocinero &c) {
        if (this != &c) {
            nombre = c.nombre;
            ingredientes = c.ingredientes;
        }
        return *this;
    }

    // ---- OPERATOR == ----
    bool operator==(const Cocinero &c) const {
        return nombre == c.nombre && ingredientes == c.ingredientes;
    }

    // ---- OPERATOR < (orden por ingredientes) ----
    bool operator<(const Cocinero &c) const {
        return ingredientes < c.ingredientes;
    }

    // ---- OPERATOR + (suma de ingredientes) ----
    Cocinero operator+(const Cocinero &c) const {
        // Suma los ingredientes y concatena nombres
        return Cocinero(nombre + "+" + c.nombre,
                        ingredientes + c.ingredientes);
    }

    // ---- OPERATOR << (imprimir) ----
    friend ostream& operator<<(ostream &os, const Cocinero &c) {
        os << "(" << c.nombre << ", " << c.ingredientes << ")";
        return os;
    }

    // ---- OPERATOR >> (leer desde teclado) ----
    friend istream& operator>>(istream &is, Cocinero &c) {
        is >> c.nombre >> c.ingredientes;
        return is;
    }
};

#endif
