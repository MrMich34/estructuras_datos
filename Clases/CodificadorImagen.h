#ifndef CODIFICADORIMAGEN_H
#define CODIFICADORIMAGEN_H

#include <string>
#include "Imagen.h"

class CodificadorImagen {
public:
    void codificarImagen(std::string& archivoEntrada);
    Imagen decodificarArchivo(std::string& archivoEntrada, std::string& archivoSalida);
};

#endif // CODIFICADORIMAGEN_H
