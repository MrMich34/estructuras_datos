#ifndef VOLUMENIMAGENES_H
#define VOLUMENIMAGENES_H

#include <iostream>
#include <vector>
#include "Imagen.h"

class VolumenImagenes {
private:
    std::string nombreBase;
    std::vector<Imagen> imagenes;

public:
    VolumenImagenes();
    
    bool cargarDesdeArchivos(std::string& base, int numImagenes);
    void mostrarInfo();
    Imagen generarProyeccion2D(std::string& direccion, std::string& criterio);
};

#endif // VOLUMENIMAGENES_H
