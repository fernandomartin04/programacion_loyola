#include <iostream>
using namespace std;
class SensorRadiacion {
private:
    int valor_lectura;

public:
    SensorRadiacion(int rad);
    int getLectura();
	bool operator>(const SensorRadiacion &otro);
	friend ostream& operator<<(ostream &os, SensorRadiacion &sensor);
	friend istream& operator>>(istream &is, SensorRadiacion &sensor);
};


