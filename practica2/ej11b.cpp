#include<iostream>
using namespace std;

int main() {
	int i = 0;
	while(i<100) {
		i++;
		float resto = i % 10;
		
		cout << i << ", ";
		if (resto == 0) {
			cout << endl;
		}

	}
	cout << "Fin del programa" << endl;

}
