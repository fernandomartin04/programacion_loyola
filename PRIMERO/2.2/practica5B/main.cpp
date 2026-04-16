#include <iostream>

#include "SensorRadiacion.h"
#include "SensorTemperatura.h"

using namespace std;

template <typename T> T& encontrarPico(T * a, int n) {
	int i_max = 0;
    for (int i = 0; i < n ; i++) {
		if (*(a + i) > *(a + i_max)) {
			i_max = i; 
		}
	}
    return *(a + i_max);
}

int main() {
    SensorTemperatura temperaturas[3] = {
        SensorTemperatura(21.5f),
        SensorTemperatura(32.8f),
        SensorTemperatura(28.2f)
    };

    SensorRadiacion radiaciones[3] = {
        SensorRadiacion(120),
        SensorRadiacion(185),
        SensorRadiacion(160)
    };

	
    return 0;
}
