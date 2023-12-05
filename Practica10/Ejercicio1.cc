/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa genera un vector de números aleatorios entre dos valores dados por el usuario.
*/


#include <iostream>
#include <vector>
#include <random>

/**
 * @brief Genera un vector de números aleatorios entre dos valores dados por el usuario.
 * @param size Tamaño del vector.
 * @param lower Valor mínimo del vector.
 * @param upper Valor máximo del vector.
 * @return Devuelve un vector de números aleatorios entre dos valores dados por el usuario.
 */
std::vector<double> GenerateVector(const int size, const double lower, const double upper){
    std::vector<double> my_vector;
    int minimo = lower * 100;
    int maximo = upper * 100;
    for(int i = 0; i < size; i++){
        double variable = (minimo + std::rand() % maximo) / 100.0;
        my_vector.push_back(variable);

    }

    return my_vector;
}

int main(){
    int tamanio;
    double lower, upper;
    std::vector<double> vectorfinal;
    tamanio = 3;
    lower = 3.0;
    upper = 7.0;
    std::vector<double> vectorFinal = GenerateVector(tamanio, lower, upper);
    for(int i = 0; i < vectorFinal.size(); i++){
        std::cout << vectorFinal[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}