 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 8 Nov 2023
 * @brief Este programa genera un número aleatorio entre dos números introducidos por el usuario.
 *
 */

#include <iostream>

int main(){
    int n, m, r;
    std::cin >> n >> m;
    if (n > m){
        r = m + std::rand() % n;
    } else {
        r = n + std::rand() % m;
    }

    std::cout << r << std::endl;

    return 0;
}