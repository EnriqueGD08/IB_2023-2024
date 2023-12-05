/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa genera un vector de números aleatorios entre dos valores dados por el usuario
* y calcula la suma de los valores del vector.
*/


#include <iostream>
#include "Ejercicio1.h"

int main(){
    int tamanio;
    double menor, mayor;
    std::cin >> tamanio >> menor >> mayor;
    std::vector<double> vectorPrincipal = GenerateVector(tamanio, menor, mayor);
    MostrarVector(vectorPrincipal);
    std::cout << ReducedSum(vectorPrincipal) << std::endl;

    return 0;
}