 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 8 Nov 2023
 * @brief Este programa calcula el área de un triángulo.
 *
 */

#include <iostream>
#include <cmath>

/**
* @brief funcion que determina si es un triángulo válido
* @param A lado A
* @param B lado B
* @param C lado C
* @return true si es un triángulo válido, false si no lo es
*/
bool IsAValidTriangle(float A, float B, float C){
    if(A+B > C && A+C > B && B+C > A){
        return true;
    }
    return false;
}

/**
* @brief funcion que calcula el área de un triángulo
* @param A lado A
* @param B lado B
* @param C lado C
* @return área del triángulo
*/
float CalcularArea(float A, float B, float C){
    float p = (A + B + C) / 2;
    return sqrt(p*(p-A)*(p-B)*(p-C));
}

int main(){
    float ladoA, ladoB, ladoC;
    std::cin >> ladoA >> ladoB >> ladoC;

    if (IsAValidTriangle(ladoA, ladoB, ladoC) == false){
        std::cout << "No es un triángulo válido" << std::endl;
    } else {
        std::cout << CalcularArea(ladoA, ladoB, ladoC) << std::endl;
    }

    return 0;
}