#include "CodificadorImagen.h"
#include "Imagen.h"
#include <iostream>

void CodificadorImagen::codificarImagen(std::string& archivoEntrada) {
    std::cout << "Codificando imagen: " << archivoEntrada << std::endl;
}

Imagen CodificadorImagen::decodificarArchivo(std::string& archivoEntrada, std::string& archivoSalida) {
    std::cout << "Decodificando archivo: " << archivoEntrada << " a " << archivoSalida << std::endl;
    return Imagen();
}