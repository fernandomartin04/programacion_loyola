#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <vector>
#include <iomanip>
#include "problema.h"
#include "carga.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

// =========================================================
// DEFINICIÓN DE COLORES Y ESTILOS
// =========================================================
#define RESET       "\033[0m"
#define NEGRITA     "\033[1m"
#define SUBRAYADO   "\033[4m"
#define ROJO        "\033[31m"
#define VERDE       "\033[32m"
#define AMARILLO    "\033[33m"
#define AZUL        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define BLANCO      "\033[37m"
#define GRIS        "\033[90m"
#define ROJO_BRI    "\033[91m"
#define VERDE_BRI   "\033[92m"
#define CYAN_BRI    "\033[96m"

// =========================================================
// UTILIDADES
// =========================================================
void pausa(int ms) {
   #ifdef _WIN32
		sleep(ms);
	#else
		usleep(ms*1000);
	#endif
}

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void imprimirCentrado(string texto, string color = BLANCO) {
    int anchoConsola = 80;
    int len = texto.length();
    int padding = (anchoConsola - len) / 2;
    if (padding < 0) padding = 0;
    
    cout << color;
    for(int i=0; i<padding; i++) cout << " ";
    cout << texto << RESET << endl;
}

void lineaHorizontal(string color = GRIS) {
    cout << color << "================================================================================" << RESET << endl;
}

void mostrarBannerPrincipal() {
    cout << CYAN_BRI << NEGRITA;
    cout << R"(
    _   _                                                    
   | \ | | ___  _ __   ___   __ _ _ __ __ _ _ __ ___  ___ 
   |  \| |/ _ \| '_ \ / _ \ / _` | '__/ _` | '_ ` _ \/ __|
   | |\  | (_) | | | | (_) | (_| | | | (_| | | | | | \__ \
   |_| \_|\___/|_| |_|\___/ \__, |_|  \__,_|_| |_| |_|___/
                            |___/                         
    )" << RESET << endl;
    imprimirCentrado("Solver", MAGENTA);
    cout << endl;
}

void animacionCargaPro(string tarea) {
    cout << endl;
    cout << "  " << AMARILLO << ">> " << tarea << RESET << endl;
    cout << "  " << GRIS << "[";
    
    int anchoBarra = 30; 
    for (int i = 0; i <= anchoBarra; i++) {
        cout << VERDE_BRI << "=";
        cout.flush();
        pausa(10);
    }
    cout << GRIS << "] " << VERDE << "100%" << RESET << endl;
}

// =========================================================
// LÓGICA DE UI
// =========================================================

void resolverPuzzle(string nombre, void (*funcCarga)(Problema&)) {
    limpiarPantalla();
    lineaHorizontal(AZUL);
    imprimirCentrado("NONOGRAMA: " + nombre, CYAN_BRI);
    lineaHorizontal(AZUL);
    
    // 1. Cargar datos y aplicar restricciones iniciales
    Problema p;
    funcCarga(p); 

    // 2. Mostrar estado inicial con las restricciones aplicadas
    p.mostrarInfoInicial();

    lineaHorizontal(GRIS);
    cout << "  Opciones disponibles:" << endl;
    cout << "  " << VERDE << "[1]" << RESET << " Resolver (Iniciar Backtracking)" << endl;
    cout << "  " << ROJO  << "[2]" << RESET << " Volver al Menú Principal" << endl;
    cout << "\n  Elige > ";

    int subOpcion;
    // Validación de entrada simple
    if (!(cin >> subOpcion)) {
        cin.clear(); cin.ignore(10000, '\n'); subOpcion = 0;
    }

    if (subOpcion != 1) {
        return; // Volver al main loop si no es 1
    }

    // 3. Ejecutar resolución
    cout << endl;
    animacionCargaPro("Procesando solución...");

    auto inicio = std::chrono::high_resolution_clock::now();
    
    p.ejecutaBacktracking();

    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duracion = fin - inicio;

    cout << endl;
    lineaHorizontal(GRIS);
    cout << "  " << MAGENTA << "Tiempo de cómputo: " << fixed << setprecision(4) << duracion.count() << " s" << RESET << endl;
    
    cout << "\n  " << AMARILLO << NEGRITA << "Presiona ENTER para volver..." << RESET;
    cin.ignore(); 
    cin.get();
}


void ejecutarTaza() {
    resolverPuzzle("TAZA", cargarTaza);
}

void ejecutarManzana() {
    resolverPuzzle("MANZANA", cargarManzana);
}

void ejecutarCorazon() {
    resolverPuzzle("CORAZON", cargarCorazon);
}


void mostrarOpcion(int num, string titulo, string desc) {
    cout << "  " << CYAN << "[" << num << "] " << NEGRITA << BLANCO << left << setw(15) << titulo 
         << RESET << GRIS << " :: " << desc << RESET << endl;
}

void despedidaEpica() {
    limpiarPantalla();
    cout << "\n\n";
    imprimirCentrado("CERRANDO SESIÓN...", ROJO);
    pausa(500);
    limpiarPantalla();
}

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    int opcion = 0;
    bool salir = false;

    while (!salir) {
        limpiarPantalla();
        mostrarBannerPrincipal();
        
        lineaHorizontal(AZUL);
        cout << endl;
        
        mostrarOpcion(1, "TAZA", "Restricciones iniciales aplicadas.");
        mostrarOpcion(2, "MANZANA", "Rápido.");
        mostrarOpcion(3, "CORAZÓN", "Rápido.");
        cout << endl;
        mostrarOpcion(4, "SALIR", "Salir del programa.");
        
        cout << endl;
        lineaHorizontal(AZUL);
        
        cout << NEGRITA << "Seleccione opción > " << AMARILLO;
        
        if (!(cin >> opcion)) {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            opcion = 0;
        }

        switch (opcion) {
            case 1: ejecutarTaza(); break;
            case 2: ejecutarManzana(); break;
            case 3: ejecutarCorazon(); break;
            case 4: salir = true; break;
            default: break;
        }
    }

    despedidaEpica();
    return 0;
}
