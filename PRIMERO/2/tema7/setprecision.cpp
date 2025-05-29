#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;

    cout << "Sin setprecision: " << pi << endl;
    cout << "Con setprecision(3): " << setprecision(3) << pi << endl;
    cout << "Con setprecision(3) y fixed: " << fixed << setprecision(3) << pi << endl;

    return 0;
}
