 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 18 Oct 2023
 * @brief Este programa toma una letra mayúscula y la convierte en minúscula
 *
 */


#include <iostream>

int main() {
	char mayus;
	std::cin >> mayus;
	char minus = mayus + 32;
	std::cout << std::endl << minus << std::endl;
	return 0;
}
