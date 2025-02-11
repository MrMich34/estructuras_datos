#include <iostream>
#include <vector>
#include <tuple>
#include "Imagen.h"

class SegmentadorImagen {
public:
    //
    /**
     * Segmentar una imagen utilizando representaciones basadas en grafos
     * @param Imagen Imagen en cuestion
     * @param vector<tuple<int,int,int>> Contenedor donde se alojan las semillas
     * @return Imagen vacia (Temporal)
     */
    Imagen segmentar(Imagen& img, std::vector<std::tuple<int, int, int>>&semillas) {
        std::cout << "Llamada a segmentar con " << semillas.size() << " semillas" << std::endl;
        return Imagen();
    }
};