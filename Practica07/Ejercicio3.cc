 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 1 Nov 2023
 * @brief Este programa recibe un numero binario y devuelve el numero decimal que representa.
 *
 */

#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int auxiliar = num;
    int resultado = 0;
    int mult = 1;

    while (auxiliar != 0){
        auxiliar /= 10;
        auxiliar *= 10;
        if((num - auxiliar) > 1){
            std::cout << "Wrong imput" << std::endl;
            return 0;
        } else{
            resultado += ((num - auxiliar)* mult);
        }
        mult *= 2;
        auxiliar /= 10;
        num /= 10;

    }

    std::cout << resultado << std::endl;

    return 0;
}