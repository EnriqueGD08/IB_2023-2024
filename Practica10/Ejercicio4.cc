/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa genera dos vectores de números aleatorios entre dos valores dados por el usuario
* y calcula la suma de los valores de ambos vectores.
*/

#include <iostream>
#include "Ejercicio1.h"

int main(){
    int tamanio1, tamanio2;
    double menor1, menor2, mayor1, mayor2;
    std::cin >> tamanio1 >> menor1 >> mayor1;
    std::cin >> tamanio2 >> menor2 >> mayor2;
    std::vector<double> vector1 = GenerateVector(tamanio1, menor1, mayor1);
    std::vector<double> vector2 = GenerateVector(tamanio2, menor2, mayor2);
    MostrarVector(vector1);
    MostrarVector(vector2);
    std::vector<double> vectorSuma = SumaDeVectores(vector1, vector2);
    MostrarVector(vectorSuma);

    return 0;
}