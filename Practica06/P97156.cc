 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 25 Oct 2023
 * @brief Este programa recibe dos números y devuelve todos los números entre ellos.
 *
 */

#include <iostream>

int main(){
    int numero_1{0}, numero_2{0};
    std::cin >> numero_1 >> numero_2;
    int contador{0};

    for (contador = numero_1; contador <= numero_2; contador++) {
        std::cout << contador << " ";
    }
    std::cout << std::endl;
    return 0;
}