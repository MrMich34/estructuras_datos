#ifndef CONSOLAVISTA_H
#define CONSOLAVISTA_H

#include <iostream>
#include <string>
#include "../Clases/Imagen.h"
#include "../Clases/VolumenImagenes.h"

class ConsolaVista {
public:
    /**
     * Muestra un mensaje en la consola
     * @param std::string& mensaje - Mensaje a mostrar
     * @return void
     */
    void mostrarMensaje(const std::string& mensaje);
    
    /**
     * Muestra un mensaje de error en la consola
     * @param std::string& mensaje - Mensaje de error a mostrar
     * @return void
     */
    void mostrarError(const std::string& mensaje);
    
    /**
     * Muestra la información de una imagen en la consola
     * @param Imagen& imagen - Imagen de la cual se mostrará la información
     * @return void
     */
    void mostrarInfoImagen(Imagen& imagen);
    
    /**
     * Muestra la información de un volumen de imágenes en la consola
     * @param VolumenImagenes& volumen - Volumen de imágenes del cual se mostrará la información
     * @return void
     */
    void mostrarInfoVolumen(VolumenImagenes& volumen);
};

#endif // CONSOLAVISTA_H
