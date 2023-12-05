 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 1 Nov 2023
 * @brief Este programa recibe un numero decimal y devuelve el numero binario que representa.
 *
 */

#include <iostream>

int main() {
    int decimalNumber;
    std::cin >> decimalNumber;

    if (decimalNumber == 0) {
        std::cout << "El número en binario es: 0" << std::endl;
        return 0;
    }

    int binary[32];
    int i = 0;

    while (decimalNumber > 0) {
        binary[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
    std::cout << std::endl;

    return 0;
}