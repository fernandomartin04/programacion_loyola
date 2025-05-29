#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << setw(15) << left << fixed << setprecision(2) << num << endl;
    cout << setw(15) << right << scientific << setprecision(3) << num << endl;

    return 0;
}
