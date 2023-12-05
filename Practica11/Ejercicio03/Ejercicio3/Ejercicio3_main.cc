/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 22 Nov 2023
* @brief Este programa lee un archivo de texto y crea un archivo por cada letra del abecedario.
*/

#include "Ejercicio3.h"

int main(int argc, char *argv[]){
    Usage(argc, argv);
    std::ifstream file(argv[1]);
    if(!file.is_open()){
        std::cout << "No se pudo abrir el archivo: " << argv[1] << std::endl;
        exit(EXIT_SUCCESS);
    }
  std::vector<std::ofstream> Outfiles(26);
  std::string palabra;
  while(file >> palabra){
    if(!Outfiles[std::toupper(palabra[0]) - 'A'].is_open()){
      Outfiles[std::toupper(palabra[0]) - 'A'].open(GenerarArchivos(palabra));
    }
      Outfiles[std::toupper(palabra[0]) - 'A'] << palabra << " ";
   }
  file.close();

  return 0;
}