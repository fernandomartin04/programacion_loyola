#include<iostream>
using namespace std;
int main() {
	int a,b;
	float c,d;
	cout << "Introduce un primer número entero a: " << endl;
	cin >> a;
	cout << "Introduce un segundo número entero b: " << endl;
	cin >> b;
	cout << "Introduce un primer número flotante c: " << endl;
	cin >> c;
	cout << "Introduce un segundo número flotante d: " << endl;
	cin >> d;

	cout << "La solución de a/b es: "<< a/b << endl;
	cout << "La solución de a/c es: "<< a/c << endl;
	cout << "La solución de a%b es: "<< a%b << endl;
	cout << "La solución de a-b-c+d es: "<< a-b-c+d << endl;
	cout << "La solución de 5*c-4*a es: "<< 5*c-4*a << endl;
	cout << "La solución de a*b/c es: "<< a*b/c << endl;
	cout << "La solución de a*(d/c) es: "<< a*(d/c) << endl;
	cout << "La solución de a*b%b es: "<< a*b%b << endl;
	a = - -b;
	cout << "La solución de a = --b es: "<< a << endl;
	b = a--;
	cout << "La solución de b=a-- es: "<< b << endl;
	a += b;
	cout << "La solución de a += b es: "<< a << endl;
	a = b;
	cout << "La solución de a = b es: "<< a << endl;
	!a;
	cout << "La solución de !a es: "<< a << endl;
	(a==b) || (c>d);
	cout << "La solución de (a==b) || (c>d) es: a = "<< a << " b= " << b << " c= " << c << " d= " << d << endl;
	(a>b)&&(b>c) || (d>c);
	cout << "La solución de (a>b)&&(b>c || (d>c) es: a = "<< a << " b= " << b << " c= " << c << " d= " << d << 		endl;
	a*3 || b*2 && (3*2);
	cout << "La solución de a*3 || b*2 && (3*2) es: a = "<< a << " b= " << b << " c= " << c << " d= " << d << endl;
	
}
