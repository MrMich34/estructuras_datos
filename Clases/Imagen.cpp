#include "Imagen.h"

Imagen::Imagen() : nombre(""), ancho(0), alto(0), maxIntensidad(0) {}
//
/**
 * Metodo para cargar imagen .PMG usando una ruta de archivo
 * @param String Ruta del archivo
 * @return Booleano verdadero en caso de una carga exitosa
 */
bool Imagen::cargarDesdePGM(std::string& ruta) {
    std::cout << "Llamada a cargarDesdePGM con ruta: " << ruta << std::endl;
    return true; 
}
//
/**
 * Metodo para guardar imagen como .PMG a una ruta especifica
 * @param String Ruta del archivo
 * @return Booleano verdadero en caso de guardado exitoso
 */
bool Imagen::guardarComoPGM(std::string& ruta) {
    std::cout << "Llamada a guardarComoPGM con ruta: " << ruta << std::endl;
    return true;
}
//
/**
 * Metodo para imprimir por pantalla la informacion relacionada a la Imagen
 * @param none
 * @return none
 */
void Imagen::mostrarInfo() {
    std::cout << "Llamada a mostrarInfo" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ancho: " << ancho << std::endl;
    std::cout << "Alto: " << alto << std::endl;
    std::cout << "Max Intensidad: " << maxIntensidad << std::endl;
}
