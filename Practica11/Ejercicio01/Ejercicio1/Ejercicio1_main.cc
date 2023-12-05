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

#include <iostream>
#include <fstream>
#include "Ejercicio1.h"
#pragma once

int main(int argc, char *argv[]){
    std::string palabra;
    std::string mayorVocales = "h";
    std::string mayorConsonantes = "a";

    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);

    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << argv[1] << std::endl;
        return 1;
    }

    while (file >> palabra){
        if(ContadorVocales(palabra) > ContadorVocales(mayorVocales)){
        mayorVocales = palabra;
        }
        if(ContadorConsonantes(palabra) > ContadorConsonantes(mayorConsonantes)){
        mayorConsonantes = palabra;
        }
    }

    std::ofstream outfile(argv[2]);
    std::cout.rdbuf(outfile.rdbuf());
    std::cout << mayorVocales << " " << mayorConsonantes << std::endl;

    file.close();

    return 0;
}