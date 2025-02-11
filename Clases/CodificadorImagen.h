#ifndef CODIFICADORIMAGEN_H
#define CODIFICADORIMAGEN_H
#include <iostream>
#include <string>
#include "Imagen.h"

class CodificadorImagen {
public:
    //
    /**
     * El metodo codifica una imagen la cual es posteriormente almacenada en un archivo
     * independiente
     * @param Imagen
     * @param String Ruta del archivo
     * @return Se retorna un booleano verdadero en caso que haya sido exitosa
     */
    bool codificarImagen(std::string& nombreArchivo);

    // Metodo para decodificar una imagen desde un archivo
    /** 
     * El metodo descodifica una imagen proveniente de un archivo
     * @param String Ruta del archivo
     * @return Se retorna un booleano verdadero en caso que haya sido exitosa
    */
    Imagen decodificarArchivo(std::string& nombreArchivo, std::string& nombreImagen);
};

#endif // CODIFICADORIMAGEN_H