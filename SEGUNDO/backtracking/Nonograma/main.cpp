#include <iostream>
#include <chrono>
#include <thread>
#include "problema.h"
#include "carga.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif


using namespace std;

// =========================================================
// COLORES TERMINAL
// =========================================================
#define RESET   "\033[0m"
#define ROJO    "\033[31m"
#define VERDE   "\033[32m"
#define AMARILLO "\033[33m"
#define AZUL    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BLANCO  "\033[37m"
#define NEGRITA "\033[1m"

// =========================================================
// UTILIDADES VISUALES
// =========================================================

void pausa(int ms) {
#ifdef _WIN32
    Sleep(ms);                 // Windows
#else
    usleep(ms * 1000);         // Linux/macOS
#endif
}

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void lineaDecorativa(char c, int n = 60) {
    for (int i = 0; i < n; i++) cout << c;
    cout << "\n";
}

void animacionCarga(string texto) {
    cout << AMARILLO << NEGRITA << "  " << texto << RESET << "\n\n";
    cout << "[";
    for (int i = 0; i < 30; i++) {
        cout << VERDE << "#" << RESET;
        cout.flush();
        pausa(20); 
    }
    cout << "]\n\n";
}

void banner() {
    cout << CYAN << NEGRITA;
    lineaDecorativa('=');
    cout << "            RESOLVEDOR DE NONOGRAMAS\n";
    lineaDecorativa('=');
    cout << RESET;
}

void marcos() {
    cout << MAGENTA;
    lineaDecorativa('-', 60);
    cout << RESET;
}

void marcosAbajo() {
    cout << MAGENTA;
    lineaDecorativa('-', 60);
    cout << RESET;
}

void opcionMenu(int n, string txt, string icono) {
    cout << BLANCO << "   " << n << ". " << AMARILLO << txt
         << CYAN << "   " << icono << RESET << "\n";
}

void separadorMenu() {
    cout << MAGENTA << "   -------------------------------------\n" << RESET;
}

void despedida() {
    limpiarPantalla();
    cout << VERDE << NEGRITA << "\n   ¡Gracias por usar el programa!\n" << RESET;
    pausa(1200);
}


// =========================================================
// FUNCIONES PARA EJECUTAR CADA NONOGRAMA
// =========================================================
void ejecutarTaza() {
    limpiarPantalla();
    animacionCarga("Inicializando nonograma [TAZA]");
    Problema p;
    cargarTaza(p);
    p.ejecutaBacktracking();
    cout << AMARILLO << "\nPresiona ENTER para continuar..." << RESET;
    cin.ignore(); cin.get();
}

void ejecutarManzana() {
    limpiarPantalla();
    animacionCarga("Inicializando nonograma [MANZANA]");
    Problema p;
    cargarManzana(p);
    p.ejecutaBacktracking();
    cout << AMARILLO << "\nPresiona ENTER para continuar..." << RESET;
    cin.ignore(); cin.get();
}

void ejecutarCorazon() {
    limpiarPantalla();
    animacionCarga("Inicializando nonograma [CORAZON]");
    Problema p;
    cargarCorazon(p);
    p.ejecutaBacktracking();
    cout << AMARILLO << "\nPresiona ENTER para continuar..." << RESET;
    cin.ignore(); cin.get();
}

// =========================================================
// MENÚ
// =========================================================
void mostrarMenu() {
    limpiarPantalla();
    banner();
    marcos();

    opcionMenu(1, "Resolver puzzle: TAZA", "[#]");
    separadorMenu();
    opcionMenu(2, "Resolver puzzle: MANZANA", "[O]");
    separadorMenu();
    opcionMenu(3, "Resolver puzzle: CORAZON", "[<3]");
    separadorMenu();
    opcionMenu(4, "Salir", "[EXIT]");

    marcosAbajo();
    cout << BLANCO << NEGRITA << "\n   Selecciona una opción: " << RESET;
}


// =========================================================
// MAIN
// =========================================================
int main() {
    int op = 0;

    while (true) {
        mostrarMenu();
        if (!(cin >> op)) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            op = 0; 
        }

        if (op == 1) ejecutarTaza();
        else if (op == 2) ejecutarManzana();
        else if (op == 3) ejecutarCorazon();
        else if (op == 4) { despedida(); return 0; }
        else {
            cout << ROJO << "Opción inválida\n" << RESET;
            pausa(900);
        }
    }

    return 0;
}
