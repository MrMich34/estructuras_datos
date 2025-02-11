#include "Imagen.h"

Imagen::Imagen() : nombre(""), ancho(0), alto(0), maxIntensidad(0) {}

bool Imagen::cargarDesdePGM(std::string& ruta) {
    std::cout << "Llamada a cargarDesdePGM con ruta: " << ruta << std::endl;
    return true; 
}

void Imagen::guardarComoPGM(std::string& ruta) {
    std::cout << "Llamada a guardarComoPGM con ruta: " << ruta << std::endl;
}

void Imagen::mostrarInfo() {
    std::cout << "Llamada a mostrarInfo" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ancho: " << ancho << std::endl;
    std::cout << "Alto: " << alto << std::endl;
    std::cout << "Max Intensidad: " << maxIntensidad << std::endl;
}
