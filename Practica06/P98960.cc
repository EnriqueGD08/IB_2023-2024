 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 25 Oct 2023
 * @brief Este programa recibe un carácter y devuelve el carácter opuesto (mayúscula o minúscula).
 *
 */

#include <iostream>

int main() {
	char parametro;
	char resultado;
	std::cin >> parametro;
	if (parametro >= 97) {
		resultado = parametro - 32;
		std::cout << resultado;
	} else {
		resultado = parametro + 32;
    std::cout << resultado;
	}
	std::cout << std::endl;
	return 0;
}
