 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 25 Oct 2023
 * @brief Este programa recibe tres números y devuelve el mayor de ellos.
 *
 */

#include <iostream>

int main() {
	int n1, n2, n3, resultado;
	std::cin >> n1 >> n2 >> n3;
	resultado = n1;
	if (resultado < n2) {
		resultado = n2;
	}
	if (resultado < n3) {
		resultado = n3;
	}
	std::cout << resultado << std::endl;
	
	return 0;
}
