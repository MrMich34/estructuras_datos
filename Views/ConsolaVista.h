#ifndef CONSOLAVISTA_H
#define CONSOLAVISTA_H

#include <iostream>
#include <string>
#include "../Clases/Imagen.h"
#include "../Clases/VolumenImagenes.h"

class ConsolaVista {
public:
    void mostrarMensaje(const std::string& mensaje);
    void mostrarError(const std::string& mensaje);
    void mostrarInfoImagen(Imagen& imagen);
    void mostrarInfoVolumen(VolumenImagenes& volumen);
};

#endif // CONSOLAVISTA_H
