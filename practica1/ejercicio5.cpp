#include<iostream>
using namespace std;
const long T = 1024;

int main(){
	long bytes, kb, mb, gb;
	cout << "Introduce un valor de los bytes: " ;
	cin >> bytes;
	
	kb = bytes/T;
	mb = kb / T;
	gb = mb / T;
	
	cout << "El resultado en bytes es: " << gb << "GB" << endl;
	cout << "El resultado en megabytes es: " << mb << "MB" << endl;
	cout << "El resultado en kilobytes es: " << kb << "KB" << endl;
	return 0;
}
