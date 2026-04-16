#include <iostream>
using namespace std;

class SensorTemperatura {
private:
    float valor_lectura;

public:
    SensorTemperatura(float temp);
    float getLectura();
	bool operator>(const SensorTemperatura &otro);
	friend ostream& operator<<(ostream &os, SensorTemperatura &sensor);
	friend istream& operator>>(istream &is, SensorTemperatura &sensor);
};

