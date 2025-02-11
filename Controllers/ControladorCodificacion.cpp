#include <iostream>
#include <string>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/VolumenImagenes.h"

class ControladorCodificacion {
private:
    ConsolaVista vista;
    Imagen imagenActual;
    VolumenImagenes volumenActual;

public:
    // Metodo para cargar una imagen desde un archivo
    void cargarImagen(std::string& nombreArchivo) {
        std::cout << "Llamada a cargarImagen con nombreArchivo: " << nombreArchivo << std::endl;
        // Se simula la carga de la imagen
        imagenActual.cargarDesdePGM(nombreArchivo);
    }

    // Metodo para cargar un volumen de imagenes desde archivos
    void cargarVolumen(std::string& nombreBase, int nIm) {
        std::cout << "Llamada a cargarVolumen con nombreBase: " << nombreBase << " y nIm: " << nIm << std::endl;
        // Se simula la carga del volumen de imagenes
        volumenActual.cargarDesdeArchivos(nombreBase, nIm);
    }

    // Metodo para mostrar informacion de la imagen actual
    void mostrarInfoImagen() {
        std::cout << "Llamada a mostrarInfoImagen" << std::endl;
        vista.mostrarInfoImagen(imagenActual);
    }

    // Metodo para mostrar informacion del volumen actual
    void mostrarInfoVolumen() {
        std::cout << "Llamada a mostrarInfoVolumen" << std::endl;
        vista.mostrarInfoVolumen(volumenActual);
    }

    // Metodo para generar una proyeccion 2D del volumen de imagenes
    void proyeccion2D(std::string& direccion, std::string& criterio, std::string& salida) {
        std::cout << "Llamada a proyeccion2D con direccion: " << direccion << ", criterio: " << criterio << " y salida: " << salida << std::endl;
        // Se simula la generacion de la proyeccion 2D
        Imagen proyeccion = volumenActual.generarProyeccion2D(direccion, criterio);
        proyeccion.guardarComoPGM(salida);
    }
};