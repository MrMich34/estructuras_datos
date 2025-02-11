#include <unordered_map>
#include <string>

class RepositorioComandos {
private:
    std::unordered_map<std::string, std::string> comandos;

public:
    //
    /**
     * Se crea el constructor referente al repositorio de comandos
     * @param none
     * @return none
     */
    RepositorioComandos() {
        comandos["ayuda"] = "Muestra la lista de comandos disponibles.";
        comandos["ayuda <comando>"] = "Muestra información detallada de un comando específico.";
        comandos["salir"] = "Cierra la aplicación.";
        comandos["cargar_imagen <nombre_imagen.pgm>"] = "Carga una imagen en memoria.";
        comandos["cargar_volumen <nombre_base> <n_im>"] = "Carga un volumen de imágenes en memoria.";
        comandos["info_imagen"] = "Muestra información de la imagen cargada en memoria.";
        comandos["info_volumen"] = "Muestra información del volumen cargado en memoria.";
        comandos["proyeccion2D <dirección> <criterio> <nombre_archivo.pgm>"] = "Genera la proyección 2D de un volumen y la guarda en un archivo.";
    }

    /**
     * Se obtienen los comandos existentes actualmente
     * @param none
     * @return unordered_map<string,string> Comandos dsiponibles
     */
    std::unordered_map<std::string, std::string> obtenerComandos() {
        return comandos;
    }

    //
    /**
     * Obtiene el comando que el usuario desea
     * @param String del comando
     * @return En caso de existencia retorna el comando, caso contrario retorna cadena de no encontrado
     */
    std::string obtenerDescripcion(std::string& comando) {
        if (comandos.find(comando) != comandos.end()) {
            return comandos[comando];
        }
        return "Comando no encontrado.";
    }
};