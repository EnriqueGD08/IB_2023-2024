 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 8 Nov 2023
 * @brief Este programa calcula el valor de una función ya definida.
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>

/**
* @brief funcion que evaluara la función
* @param X valor de X
* @param Y valor de Y
* @param T valor de T
* @return resultado de la función
*/
float evaluationfuntion(float X, float Y, float T){
    float restultado1 = sqrt((2*T -4));
    float restultado2 = pow(X,2) - pow(Y,2);

    return (restultado1 / restultado2);
}

int main(){
    float valorT, valorX, valorY;
    std::cin >> valorX >> valorY >> valorT;

    std::cout << std::setprecision(4) << evaluationfuntion(valorX, valorY, valorT) << std::endl;

    return 0;
}