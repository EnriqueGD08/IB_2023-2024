 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 8 Nov 2023
 * @brief Este programa calcula el máximo y el mínimo de un número natural.
 *
 */

#include <iostream>

int main() {

    long int numero;
    std::cout << "Escriba un número natural: ";
    std::cin >> numero;
    std::cout << std::endl;
    int max = 0;
    int min = 10;
    long int aux = numero;
    long int aux2 = numero;
    while (aux != 0){    
        aux = aux / 10;
        aux = aux * 10;
        if ((aux2 - aux) > max) {max = (aux2 - aux);}
        if ((aux2 - aux) < min) {min = (aux2 - aux);}
        aux = aux / 10;
        aux2 = aux2 / 10;
    }
    std::cout << "El mayor dígito de " << numero << " es " << max << " y el mínimo es " << min << std::endl;

    return 0;
}