#include "ConsolaVista.h"

void ConsolaVista::mostrarMensaje(const std::string& mensaje) {
    std::cout << mensaje << std::endl;
}

void ConsolaVista::mostrarError(const std::string& mensaje) {
    std::cerr << "ERROR: " << mensaje << std::endl;
}

// Add these missing implementations
void ConsolaVista::mostrarInfoImagen(Imagen& imagen) {
    std::cout << "Información de la imagen:" << std::endl;
    imagen.mostrarInfo();
}

void ConsolaVista::mostrarInfoVolumen(VolumenImagenes& volumen) {
    std::cout << "Información del volumen de imágenes:" << std::endl;
    volumen.mostrarInfo();
}
