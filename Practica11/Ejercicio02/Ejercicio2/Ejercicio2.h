#include <iostream>
#include <string>
#include <fstream>

/**
 * @brief Muestra el uso correcto del programa.
 * @param arc Número de argumentos.
 * @param argv Vector de argumentos.
 */
void Usage(int arc, char* argv[]);

/**
 * @brief Cambia las vocales de una palabra por la siguiente vocal.
 * @param palabra Palabra a la que se le va a cambiar las vocales.
 * @return Palabra con las vocales cambiadas.
 */
std::string CambiarVocales(const std::string& palabra);