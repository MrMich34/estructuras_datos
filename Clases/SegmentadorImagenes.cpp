#include <iostream>
#include <vector>
#include <tuple>
#include "Imagen.h"

class SegmentadorImagen {
public:
    // Metodo para segmentar una imagen usando grafos
    Imagen segmentar(Imagen& img, std::vector<std::tuple<int, int, int>>& semillas) {
        std::cout << "Llamada a segmentar con " << semillas.size() << " semillas" << std::endl;
        return Imagen(); // Retorna una imagen vacia por ahora
    }
};