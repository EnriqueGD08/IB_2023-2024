/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 22 Nov 2023
* @brief Este programa lee un archivo de texto y devuelve la palabra con más vocales y la palabra con más consonantes.
*/

#include "Ejercicio2.h"

int main(int argc, char *argv[]){
    Usage(argc, argv);
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << argv[1] << std::endl;
        return 1;
    }
    std::ofstream outfile(argv[2]);
    if (!outfile.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << argv[2] << std::endl;
        file.close();
        return 1;
    }
    std::cout.rdbuf(outfile.rdbuf());
    

    std::string palabra;
    while (file >> palabra){ 
        std::cout << CambiarVocales(palabra) << " ";
    }

    outfile.close();
    file.close(); 
  
    return 0;
}