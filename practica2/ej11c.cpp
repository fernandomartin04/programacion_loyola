#include<iostream>
using namespace std;

int main() {
	int i = 1;
	do {
		i++;
		float resto = i % 10;
		cout << i << ", ";
		if (resto == 0) {
			cout << endl;
		}
	}
	while(i<100);	

	cout << "Fin del programa" << endl;

}
