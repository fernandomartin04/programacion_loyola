#include<iostream>
using namespace std;

int main() {

	for(int i=1; i<101; i++) {
		float resto = i % 10;
		
		cout << i << ", ";
		if (resto == 0) {
			cout << endl;
		}
	}
	cout << "Fin del programa" << endl;

}
