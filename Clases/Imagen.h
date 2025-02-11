#ifndef IMAGEN_H
#define IMAGEN_H

#include <iostream>
#include <vector>
#include <string>

class Imagen {
private:
    std::string nombre;
    int ancho;
    int alto;
    int maxIntensidad;
    std::vector<std::vector<int>> pixeles;

public:
    Imagen();

    bool cargarDesdePGM(std::string& ruta);
    void guardarComoPGM(std::string& ruta);
    void mostrarInfo();
};

#endif // IMAGEN_H
