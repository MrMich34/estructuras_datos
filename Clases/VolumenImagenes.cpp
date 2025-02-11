#include "VolumenImagenes.h"
#include "Imagen.h"

VolumenImagenes::VolumenImagenes() : nombreBase("") {}

/**
 * Cargar desde los archivos la base con la cantidad de imagenes necesaria
 * @param string ruta
 * @param int numero de imagenes
 * @return Booleano veradero en caso que se logre cargar
 */
bool VolumenImagenes::cargarDesdeArchivos(std::string& base, int numImagenes) {
    std::cout << "Llamada a cargarDesdeArchivos con base: " << base << " y numImagenes: " << numImagenes << std::endl;
    return true;
}
//
/**
 * Se muestra toda la informacion relacionada a la base y el numero de imagenes cargadas
 */
void VolumenImagenes::mostrarInfo() {
    std::cout << "Llamada a mostrarInfo" << std::endl;
    std::cout << "Nombre Base: " << nombreBase << std::endl;
    std::cout << "Número de Imágenes: " << imagenes.size() << std::endl;
}

//
/**
 * Se genera una proyeccion2D
 * @param string direccion
 * @param string criterio de proyeccion
 * @return Una instancia de la clase Imagen que contenga la informacion de la proyeccion
 */
Imagen VolumenImagenes::generarProyeccion2D(std::string& direccion, std::string& criterio) {
    std::cout << "Llamada a generarProyeccion2D con direccion: " << direccion << " y criterio: " << criterio << std::endl;
    return Imagen();
}
