#include "carga.h"

// ==========================================================
//  NONOGRAMA: TAZA
// ==========================================================
void cargarTaza(Problema &p)
{
    // Vertical
    p.filasP = {
        Pista({1,1}), Pista({1,1}), Pista({1,1}), Pista({1,1}), Pista({1,1}),
        Pista({}), Pista({10}), Pista({13}), Pista({14}), Pista({10,2}),
        Pista({9,2}), Pista({12}), Pista({8,2}), Pista({6}), Pista({4})
    };

    p.columnasP = {
        Pista({}), Pista({4}), Pista({1,7}), Pista({1,1,1,8}), Pista({1,9}),
        Pista({9}), Pista({9}), Pista({1,9}), Pista({1,1,1,8}), Pista({1,7}),
        Pista({6}), Pista({2,2}), Pista({2,2}), Pista({5}), Pista({3})
    };

    p.filas = p.filasP.size();
    p.columnas = p.columnasP.size();
}


// ==========================================================
//  NONOGRAMA: MANZANA
// ==========================================================
void cargarManzana(Problema &p)
{
    // Vertical
    p.filasP = {
        Pista({}), Pista({2}), Pista({5,1}), Pista({6}), Pista({1}),
        Pista({1}), Pista({5,1,3}), Pista({13}), Pista({3,9}), Pista({2,9}),
        Pista({13}), Pista({12}), Pista({11}), Pista({9}), Pista({6})
    };

    p.columnasP = {
        Pista({2}), Pista({6}), Pista({3,3}), Pista({2,4}), Pista({3,2,4}),
        Pista({3,9}), Pista({2,8}), Pista({2,10}), Pista({3,8}), Pista({1,8}),
        Pista({1,9}), Pista({8}), Pista({7}), Pista({4}), Pista({})
    };

    p.filas = p.filasP.size();
    p.columnas = p.columnasP.size();
}

// ==========================================================
//  NONOGRAMA: CORAZON
// ==========================================================
void cargarCorazon(Problema &p)
{
    p.filasP = {
        Pista({}), Pista({4, 4}), Pista({2, 2, 6}), Pista({2, 12}), Pista({2, 12}),
        Pista({2, 12}), Pista({2, 12}), Pista({15}), Pista({13}), Pista({11}),
        Pista({9}), Pista({7}), Pista({5}), Pista({3}), Pista({1})
    };

    p.columnasP = {
        Pista({5}), Pista({7}), Pista({2, 3}), Pista({1, 8}), Pista({1, 9}),
        Pista({12}), Pista({12}), Pista({12}), Pista({12}), Pista({12}),
        Pista({11}), Pista({10}), Pista({9}), Pista({7}), Pista({5})
    };

    p.filas = p.filasP.size();
    p.columnas = p.columnasP.size();
}

