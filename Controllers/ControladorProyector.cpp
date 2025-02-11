#include <iostream>
#include <string>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/CodificadorImagen.cpp"

class ControladorProyector {
private:
    ConsolaVista vista;
    CodificadorImagen codificador;
    Imagen imagenActual;

public:
    // Metodo para codificar una imagen y guardarla en un archivo
    void codificarImagen(std::string& nombreSalida) {
        std::cout << "Llamada a codificarImagen con nombreSalida: " << nombreSalida << std::endl;
        // Se simula la codificacion de la imagen
        codificador.codificarImagen(imagenActual, nombreSalida);
    }

    // Método para decodificar una imagen desde un archivo y guardarla
    void decodificarArchivo(std::string& nombreArchivo, std::string& nombreSalida) {
        std::cout << "Llamada a decodificarArchivo con nombreArchivo: " << nombreArchivo << " y nombreSalida: " << nombreSalida << std::endl;
        // Se simula la decodificacion de la imagen
        Imagen imagenDecodificada = codificador.decodificarArchivo(nombreArchivo);
        imagenDecodificada.guardarComoPGM(nombreSalida);
    }
};