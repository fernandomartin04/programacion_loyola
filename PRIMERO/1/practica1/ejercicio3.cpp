#include<iostream>
using namespace std;

int main(){
	char var1;
	string var2;
	int var3;
	short var4;
	float var5;
	double var6;
	long double var7;
	
	cout << "El tamano de un char es: " << sizeof(var1)*8 << endl;
	cout << "El tamano de un string es: " << sizeof(var2)*8 << endl;
	cout << "El tamano de un int es: " << sizeof(var3)*8 << endl;
	cout << "El tamano de un short es: " << sizeof(var4)*8 << endl;
	cout << "El tamano de un float es: " << sizeof(var5)*8 << endl;
	cout << "El tamano de un double es: " << sizeof(var6)*8 << endl;
	cout << "El tamano de un long double es: " << sizeof(var7)*8 << endl;
}
