#include "ConsolaVista.h"

/**
 * Muestra un mensaje en la consola
 * @param std::string& mensaje - Mensaje a mostrar
 * @return void
 */
void ConsolaVista::mostrarMensaje(const std::string& mensaje) {
    std::cout << mensaje << std::endl;
}

/**
 * Muestra un mensaje de error en la consola
 * @param std::string& mensaje - Mensaje de error a mostrar
 * @return void
 */
void ConsolaVista::mostrarError(const std::string& mensaje) {
    std::cerr << "ERROR: " << mensaje << std::endl;
}

/**
 * Muestra la información de una imagen en la consola
 * @param Imagen& imagen - Imagen de la cual se mostrará la información
 * @return void
 */
void ConsolaVista::mostrarInfoImagen(Imagen& imagen) {
    std::cout << "Información de la imagen:" << std::endl;
    imagen.mostrarInfo();
}

/**
 * Muestra la información de un volumen de imágenes en la consola
 * @param VolumenImagenes& volumen - Volumen de imágenes del cual se mostrará la información
 * @return void
 */
void ConsolaVista::mostrarInfoVolumen(VolumenImagenes& volumen) {
    std::cout << "Información del volumen de imágenes:" << std::endl;
    volumen.mostrarInfo();
}
