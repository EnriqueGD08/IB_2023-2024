 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 1 Nov 2023
 * @brief Este programa imprime la serie de Fibonacci hasta el numero que se le pase como argumento.
 *
 */

#include <iostream>

int main() {
    int parada;
    std::cin >> parada;
    int n1 = 0;
    int n2 = 1;
    int aux = 0;
    std::cout << n1 << " ";
    for(int i = 1; i < parada; i++){
        std::cout << n2 << " ";
        aux = n2;
        n2 += n1;
        n1 = aux;
    }

    std::cout << std::endl;
    
    return 0;
}