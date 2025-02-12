#include "CodificadorImagen.h"
#include "Imagen.h"
#include <iostream>
//
/**
 * Metodo para codificar imagen por medio de la codificación de Huffman
 * @param String de archivo de entrada a codificar que estara cargada en memoria
 * Es void, por lo que este no genera retorno - Al no ser parte de esta entrega, la funcion no esta implementada
 */

void CodificadorImagen::codificarImagen(std::string& archivoEntrada) {
    std::cout << "Codificando imagen: " << archivoEntrada << std::endl;
}

//
/**
 * Metodo para decodificar una imagen a formato PGM
 * @param String de archivo de entrada a decodificar (archivo en formato.huf), junto a String de archivo de salida (imagen.pgm)
 * Es de tipo imagen, por lo que retorna un elemento del mismo tipo - Al no ser parte de esta entrega, la funcion no esta implementada
 */
Imagen CodificadorImagen::decodificarArchivo(std::string& archivoEntrada, std::string& archivoSalida) {
    std::cout << "Decodificando archivo: " << archivoEntrada << " a " << archivoSalida << std::endl;
    return Imagen();
}
