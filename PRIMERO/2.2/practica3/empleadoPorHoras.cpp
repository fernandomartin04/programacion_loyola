#include "empleadoPorHoras.h"

EmpleadoPorHoras::EmpleadoPorHoras() {
    horasTrabajadas=0;
    tarifaPorHora=0;
}

EmpleadoPorHoras::EmpleadoPorHoras(float horasTrabajadas, float tarifaPorHora) : Empleado(nombre, id) {
    this->horasTrabajadas=horasTrabajadas;
    this->tarifaPorHora=tarifaPorHora;
}

float EmpleadoPorHoras::calcularSalario() {
    return horasTrabajadas*tarifaPorHora;
}