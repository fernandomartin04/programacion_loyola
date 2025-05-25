// 0.1
#pragma once
#include<iostream>

using namespace std;

class Persona{
    // 0.1
    protected:
        string nombre;
    public:
        Persona();
    // 0.1
        Persona(string nombre);
        
        void setNombre(string nombre);

    // 0.1
        virtual string toString();
};