 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 1 Nov 2023
 * @brief Este programa recibe un numero y devuelve la suma de los dígitos que contiene.
 *
 */

#include <iostream>
#include <string>

int main(){
    std::string entrada;
    std::cin >> entrada;
    int contador = 0;
    for(char digito : entrada){
        if (std::isdigit(digito))
        contador += (digito - 48);
    }

    std::cout << contador << std::endl;
    return 0;
}