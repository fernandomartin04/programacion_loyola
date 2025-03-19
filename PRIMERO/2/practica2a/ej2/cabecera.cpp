#include "cabecera.h" 
// Constructor: El color inicial es rojo 
Luz::Luz() { 
color = "Rojo"; 
}

// Inicializar semáforo (opcional) 
void Luz::iniciarSemaforo() { 
color = "Rojo"; 
} 

// Cambiar el color de Verde -> Amarillo -> Rojo -> Verde... 
void Luz::cambioDeColor() { 
if (color == "Rojo") 
color = "Verde"; 
else if (color == "Verde") 
color = "Amarillo"; 
else color = "Rojo"; 
} 

// Obtener el color actual 
std::string 
Luz::getColor() { 
return color; 
}
