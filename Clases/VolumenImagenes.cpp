#include "VolumenImagenes.h"
#include "Imagen.h"

VolumenImagenes::VolumenImagenes() : nombreBase("") {}

bool VolumenImagenes::cargarDesdeArchivos(std::string& base, int numImagenes) {
    std::cout << "Llamada a cargarDesdeArchivos con base: " << base << " y numImagenes: " << numImagenes << std::endl;
    return true;
}

void VolumenImagenes::mostrarInfo() {
    std::cout << "Llamada a mostrarInfo" << std::endl;
    std::cout << "Nombre Base: " << nombreBase << std::endl;
    std::cout << "Número de Imágenes: " << imagenes.size() << std::endl;
}

Imagen VolumenImagenes::generarProyeccion2D(std::string& direccion, std::string& criterio) {
    std::cout << "Llamada a generarProyeccion2D con direccion: " << direccion << " y criterio: " << criterio << std::endl;
    return Imagen();
}
