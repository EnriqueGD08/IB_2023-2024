#include "Ejercicio3.h"

/**
 * @brief Muestra el uso correcto del programa.
 * @param argc Número de argumentos.
 * @param argv Vector de argumentos.
 */
void Usage(int argc, char *argv[]){
    if(argc != 2){
        std::cout << "File " << argv[0] << ": Faltan parametros " << std::endl;
        exit(EXIT_SUCCESS);
    }

}

/**
 * @brief Genera el nombre de los archivos.
 * @param palabra Palabra a la que se le va a generar el nombre.
 * @return Nombre del archivo.
 */
std::string GenerarArchivos(const std::string& palabra){
    return std::string(1, std::toupper(palabra[0])) + ".txt";
}

