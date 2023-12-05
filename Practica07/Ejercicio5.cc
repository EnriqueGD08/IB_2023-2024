 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 1 Nov 2023
 * @brief Este programa recibe un año y devuelve si es bisiesto o no.
 *
 */

#include <iostream>

int main() {
    int anio;
    std::cin >> anio;

    if ((anio / 100) % 4 == 0 && ((anio  % 100) == 0)){
        std::cout << "YES" << std::endl;
    } else{
        if (anio % 4 == 0 && ((anio  % 100) != 0)){
        std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
        
    }

    return 0;
}