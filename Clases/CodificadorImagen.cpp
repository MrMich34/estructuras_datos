#include <iostream>
#include <string>
#include "Imagen.h"

class CodificadorImagen {
public:
    // Metodo para codificar una imagen y guardarla en un archivo
    bool codificarImagen(Imagen& img, std::string& nombreArchivo) {
        std::cout << "Llamada a codificarImagen con nombreArchivo: " << nombreArchivo << std::endl;
        return true; // Se asume que la codificacion fue exitosa
    }

    // Metodo para decodificar una imagen desde un archivo
    Imagen decodificarArchivo(std::string& nombreArchivo) {
        std::cout << "Llamada a decodificarArchivo con nombreArchivo: " << nombreArchivo << std::endl;
        return Imagen(); // Retorna una imagen vacia por ahora
    }
};