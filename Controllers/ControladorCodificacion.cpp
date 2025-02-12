#include <iostream>
#include <string>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/VolumenImagenes.h"
#include "../Clases/CodificadorImagen.h"

class ControladorCodificacion {
private:
    CodificadorImagen codificadorImagen;
    ConsolaVista vista;
    Imagen imagenActual;
    VolumenImagenes volumenActual;

public:
    /**
     * Cargar la imagen requerida
     * @param String nombre del archivo
     * @return none
     */
    void cargarImagen(std::string& nombreArchivo) {
        std::cout << "Llamada a cargarImagen con nombreArchivo: " << nombreArchivo << std::endl;
        // Simulacion carga de la imagen
        imagenActual.cargarDesdePGM(nombreArchivo);
    }

    //
    /**
     * Cargar un volumen con un nombre y un numero de imagenes requeridas
     * @param string nombre del volumen
     * @param int numero de imagenes
     * @return none
     */
    void cargarVolumen(std::string& nombreBase, int nIm) {
        std::cout << "Llamada a cargarVolumen con nombreBase: " << nombreBase << " y nIm: " << nIm << std::endl;
        // Se simula la carga del volumen de imagenes
        volumenActual.cargarDesdeArchivos(nombreBase, nIm);
    }

    //
    /**
     * Mostrar por consola toda la informacion contenida por una imagen
     * @param none
     * @return none
     */
    void mostrarInfoImagen() {
        std::cout << "Llamada a mostrarInfoImagen" << std::endl;
        vista.mostrarInfoImagen(imagenActual);
    }

    //
    /**
     * Mostrar por consola toda la informacion contenida por un volumen
     * @param none
     * @return none
     */
    void mostrarInfoVolumen() {
        std::cout << "Llamada a mostrarInfoVolumen" << std::endl;
        vista.mostrarInfoVolumen(volumenActual);
    }

    //
    /**
     * Generar una proyeccion 2D respecto un volumen de imagenes
     * @param string direccion
     * @param string criterio de proyeccion
     * @param string direccion de salida
     */
    void proyeccion2D(std::string& direccion, std::string& criterio, std::string& salida) {
        std::cout << "Llamada a proyeccion2D con direccion: " << direccion << ", criterio: " << criterio << " y salida: " << salida << std::endl;
        // Simulacion de la proyeccion 2D
        Imagen proyeccion = volumenActual.generarProyeccion2D(direccion, criterio);
        proyeccion.guardarComoPGM(salida);
    }

    //
    /**
     * Metodo controlador para codificación de una imagen
     * @param String de archivo de entrada a codificar que estara cargada en memoria para ser verificado y codificado
     * Al ser de tipo "bool", retornara un valor del mismo tipo (1 o 0) dependiendo el resultado - Al no ser parte de esta entrega, la funcion no esta implementada
     */
    bool codificarImagen(std::string& nombreArchivo){
        
        std::cout << "Llamada a funcion: " << nombreArchivo << std::endl;
        codificadorImagen.codificarImagen(nombreArchivo);
        return true;
    }

    //
    /**
     * Metodo controlador para decodificación de una imagen
     * @param String de archivo.huf donde se encuentra la información, junto a un String del nombre de la imagen que se guardara en formato .pgm
     * Al ser de tipo Imagen, retornara un elemento del mismo tipo - Al no ser parte de esta entrega, la funcion no esta implementada
     */
    Imagen decodificarArchivo(std::string& nombreArchivo, std::string& nombreImagen) {
        std::cout << "Llamada a funcion: " << nombreArchivo << std::endl;
        codificadorImagen.decodificarArchivo(nombreArchivo, nombreImagen);
        
        return Imagen(); // Retorna una imagen vacia por ahora
    }


};
