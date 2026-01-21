#include<iostream>
#include"problemafestival.h"

using namespace std;

void showList(list<Corto> const & l)
{
    list<Corto>::const_iterator it = l.begin();
    while(it != l.end())
    {
        it->mostrar();
        it++;
    }
}

int main()
{
    Corto c1(1, 10, "Super Mario y la Estrella Dorada");
    Corto c2(2, 14, "Luigi y la Mansión Fantasmona");
    Corto c3(3, 20, "La Invasión de los Koopas");
    Corto c4(4, 21, "Carrera en la Rainbow Road");
    Corto c5(5, 10, "Toad y el Bosque Champiñón");
    Corto c6(6, 12, "Yoshi: Aventura en Isla Huevo");
    Corto c7(7, 13, "Bowser: Fuego y Maldades");
    Corto c8(8, 8,  "Goombas al Ataque");
    Corto c9(9, 11, "Peach y el Festival Estelar");

    list<Corto> l = {c1, c2, c3, c4, c5, c6, c7, c8, c9};

    cout << "Mostramos la lista de cortos introducidos:" << endl;
    showList(l);

    cout << endl << "Ordenamos la lista segun el criterio de la clase Corto:" << endl;
    l.sort();
    showList(l);

    int n = 3;
    /* TODO Descomentar cuanto tenga implementado el algoritmo voraz
    cout << endl << "Algoritmo Voraz (Luigi) **********************" << endl;
    ProblemaFestival p1(l, n);
    SolucionFestival s1 = p1.ejecutaVoraz();
    s1.mostrar();
    */
    
    /* TODO Descomentar cuando tenga implementado el algoritmo backtracking
    cout << endl << "Algoritmo Backtracking (Mario) ***************" << endl;
    ProblemaFestival p2(l, n);
    SolucionFestival s2 = p2.ejecutaBacktracking();
    s2.mostrar();
    */

    return 0;
}
