#include <iostream>
#include <fstream>
#include <vector>

/**
 * @brief Muestra el uso correcto del programa.
 * @param argc Número de argumentos.
 * @param argv Vector de argumentos.
 */
void Usage(int argc, char *argv[]);

/**
 * @brief Genera el nombre de los archivos.
 * @param palabra Palabra a la que se le va a generar el nombre.
 * @return Nombre del archivo.
 */
std::string GenerarArchivos(const std::string& palabra);