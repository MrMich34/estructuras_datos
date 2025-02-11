#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/VolumenImagenes.h"
#include "../Clases/RepositorioComandos.cpp"
#include "ControladorCodificacion.cpp"
#include "ControladorProyector.cpp"
#include "ControladorSegmentador.cpp"


class ControladorComandos {
private:
    ConsolaVista vista;
    RepositorioComandos repositorio;
    Imagen* imagenActual;
    VolumenImagenes* volumenActual;
    ControladorCodificacion controladorCodificacion;
    ControladorProyector controladorProyector;
    ControladorSegmentador controladorSegmentador;

public:
    // Constructor
    ControladorComandos() : imagenActual(nullptr), volumenActual(nullptr) {}

    // Metodo para procesar la entrada del usuario
    void procesarEntrada(const std::string& input) {
        std::istringstream iss(input);
        std::string comando;
        iss >> comando;
        
        std::vector<std::string> parametros;
        std::string parametro;
        while (iss >> parametro) {
            parametros.push_back(parametro);
        }

        ejecutarComando(comando, parametros);
    }
    //
    /**
    * Ejecuta el comando requerido
    * @param string comando
    * @param vector<string> parametros necesarios
    * @return none
    */
    void ejecutarComando(std::string& comando, std::vector<std::string>& parametros) {
        if (comando == "ayuda") {
            if (parametros.empty()) {
                mostrarAyuda();
            } else {
                mostrarAyudaComando(parametros[0]);
            }
        } else if (comando == "salir") {
            std::cout << "Saliendo de la aplicación..." << std::endl;
            exit(0);
        } else if (comando == "cargar_imagen" && parametros.size() == 1) {
            controladorCodificacion.cargarImagen(parametros[0]);
        } else if (comando == "cargar_volumen" && parametros.size() == 2) {
            controladorCodificacion.cargarVolumen(parametros[0], std::stoi(parametros[1]));
        } else if (comando == "codificar_imagen" && parametros.size() == 1){
            controladorCodificacion.codificarImagen(parametros[0]);
        } else if (comando == "decodificar_archivo" && parametros.size() == 2){
            controladorCodificacion.decodificarArchivo(parametros[0], parametros[1]);
        }else if (comando == "info_imagen") {
            controladorCodificacion.mostrarInfoImagen();
        } else if (comando == "info_volumen") {
            controladorCodificacion.mostrarInfoVolumen();
        } else if (comando == "proyeccion2D" && parametros.size() == 3) {
            controladorCodificacion.proyeccion2D(parametros[0], parametros[1], parametros[2]);
        } else if (comando == "segmentar"){
            std::string destino;
            destino = parametros[0];
            std::vector<std::tuple<int, int, int>> semillas;
            int t1,t2,t3;
            for(int i = 1; i<parametros.size(); i++){
                t1 = stoi(parametros[i]);
                i++;
                t2 = stoi(parametros[i]);
                i++;
                t3 = stoi(parametros[i]);
                std::tuple<int,int,int> tp(t1,t2,t3);
                semillas.push_back(tp);
            }
            controladorSegmentador.segmentarImagen(semillas,destino);
        }else {
            vista.mostrarError("Comando no reconocido o parámetros incorrectos.");
        }
    }

    // Metodo para mostrar la ayuda
    void mostrarAyuda() {
        auto comandos = repositorio.obtenerComandos();
        for (auto& par : comandos) {
            vista.mostrarMensaje(par.first + ": " + par.second);
        }
    }

    // Metodo para mostrar la ayuda de un comando especifico
    void mostrarAyudaComando(std::string& comando) {
        std::string descripcion = repositorio.obtenerDescripcion(comando);
        vista.mostrarMensaje(comando + ": " + descripcion);
    }
};

// Funcion main para ejecutar el programa
int main() {
    ControladorComandos controlador;
    std::string input;

    std::cout << "Bienvenido al sistema de procesamiento de imágenes. Escriba 'ayuda' para ver los comandos disponibles." << std::endl;

    while (true) {
        std::cout << "$ ";
        std::getline(std::cin, input);
        controlador.procesarEntrada(input);
    }

    return 0;
}
