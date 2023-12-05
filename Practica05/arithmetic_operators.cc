 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 18 Oct 2023
 * @brief Este programa realiza operaciones aritméticas básicas y las muestra por pantalla
 *
 */

#include <iostream>

int main() {
	int a = 7;
	int b = 3;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << a << " % " << b << " = " << a % b << std::endl;

	return 0;
}
