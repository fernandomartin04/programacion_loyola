#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 123;
    cout << "Sin setw: [" << num << "]" << endl;
    cout << "Con setw(10): [" << setw(10) << num << setw(10) << "]" << endl;

    cout << "Con setw(10) y left: [" << setw(10) << left << num << "]" << endl;
    cout << "Con setw(10) y right: [" << setw(10) << right << num << "]" << endl;

    return 0;
}
