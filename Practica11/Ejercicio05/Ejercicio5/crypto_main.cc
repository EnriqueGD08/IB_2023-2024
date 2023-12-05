/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 22 Nov 2023
* @brief Este programa incripta y desincripta un mensaje.
*/

#include "crypto.h"

int main(int argc, char* argv[]) {
    int argumento;
    std::cin >> argumento;
    std::string argumento_entero =  argv[2];
    int numerocrypto = std::stoi(argumento_entero);
    std::string mensaje;
    // std::cout << numerocrypto;
    std::ifstream mensaje_introducido(argv[1]);
    if(argumento == 1){
    std::ofstream mensaje_salida("MensajeCodificado.txt");
    while(mensaje_introducido >> mensaje){
        Encriptar(mensaje, numerocrypto);
        mensaje_salida << mensaje << " ";
    }
    }
    if(argumento == 2){
    std::ofstream mensaje_salida("MensajeDescodificado.txt");
    while(mensaje_introducido >> mensaje){
        Desencriptar(mensaje, numerocrypto);
        mensaje_salida << mensaje << " ";
    }
    }

  return 0;
}