#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cout << "Introduce un valor para n" << endl;
	cin >> n;
	int calculo = (abs(pow(n,3))*log(pow(n,2)))/(sqrt(pow(n,3)));
	cout << "La solución es: " << calculo << endl;
	return 0;

}

