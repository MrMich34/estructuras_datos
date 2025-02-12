#include <iostream>
#include <string>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/CodificadorImagen.h"

class ControladorProyector {
private:
    ConsolaVista vista;
    CodificadorImagen codificador;
    Imagen imagenActual;

public:
    /**
    *Codifica una imagen y guardarla en un archivo
    *@param string nombreSalida
    *@return none
    */ 
    void codificarImagen(std::string& nombreSalida) {
        std::cout << "Llamada a codificarImagen con nombreSalida: " << nombreSalida << std::endl;
        // Se simula la codificacion de la imagen
        codificador.codificarImagen(nombreSalida);
    }

    /**
    *Decodifica una imagen desde un archivo y guardarla
    *@param string nombreArchivo
    *@param string nombreSalida
    *@return none
    */
    void decodificarArchivo(std::string& nombreArchivo, std::string& nombreSalida) {
        std::cout << "Llamada a decodificarArchivo con nombreArchivo: " << nombreArchivo << " y nombreSalida: " << nombreSalida << std::endl;
        // Se simula la decodificacion de la imagen
        Imagen imagenDecodificada = codificador.decodificarArchivo(nombreArchivo, nombreSalida);
        imagenDecodificada.guardarComoPGM(nombreSalida);
    }
};
