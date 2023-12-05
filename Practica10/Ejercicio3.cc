/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa genera un vector de números aleatorios entre dos valores dados por el usuario
* y calcula el máximo, el mínimo y el promedio de los valores del vector.
*/

#include <iostream>
#include "Ejercicio1.h"

int main(){
    int tamanio;
    double menor, mayor, maximo, minimo, promedio;
    std::cin >> tamanio >> menor >> mayor;
    std::vector<double> vector = GenerateVector(tamanio, menor, mayor);
    MostrarVector(vector);
    valores_vector(vector, minimo, maximo, promedio);
    std::cout << minimo << " " << maximo << " " << promedio << std::endl;

    return 0;
}