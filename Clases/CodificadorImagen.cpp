#include <iostream>
#include <string>
#include "Imagen.h"
#include "CodificadorImagen.h"

bool codificarImagen(std::string& nombreArchivo) {
    std::cout << "Llamada a codificarImagen con nombreArchivo: " << nombreArchivo << std::endl;
    return true;
}

// Metodo para decodificar una imagen desde un archivo
/** 
 * El metodo descodifica una imagen proveniente de un archivo
 * @param String Ruta del archivo
 * @return Se retorna un booleano verdadero en caso que haya sido exitosa
*/
Imagen decodificarArchivo(std::string& nombreArchivo, std::string& nombreImagen) {
    std::cout << "Llamada a decodificarArchivo con nombreArchivo: " << nombreArchivo << std::endl;
    return Imagen(); // Retorna una imagen vacia por ahora
}