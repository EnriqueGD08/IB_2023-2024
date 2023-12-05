/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa toma dos catetos y calcula la hipotenusa.
*/

#include <iostream>
#include <cmath>

int main(){
    float cateto1, cateto2, resultado;
    std::cin >> cateto1 >> cateto2;
    resultado = sqrt(pow(cateto1,2) + pow(cateto2,2));
    std::cout << resultado << std::endl;
    return 0;
}