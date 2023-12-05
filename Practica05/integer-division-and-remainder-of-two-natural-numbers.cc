 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 18 Oct 2023
 * @brief Este programa hace una división entera y muestra el cociente y el resto
 *
 */

#include <iostream>

int main() {
	int num1;
	int num2;
	std::cin >> num1 >> num2;
	if (num2 <= 0) {
		return 0;
	}
	std::cout << num1 / num2 << " " << num1 % num2 << std::endl;
	
 return 0;
}
