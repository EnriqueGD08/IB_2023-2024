 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 25 Oct 2023
 * @brief Este programa recibe una hora y devuelve el segundo siguiente.
 *
 */

#include <iostream>

int main() {
	int horas, minutos, segundos;
	std::cin >> horas >> minutos >> segundos;
	segundos++;
	if (segundos == 60){
	segundos = 0;
	minutos++;
	}
	if (minutos == 60){
	minutos = 0;
	horas++;
	}
	if (horas >= 24){
	horas = (horas % 24);
	}

	if (horas < 10) {
	std::cout << "0" << horas << ":";
	} else {std::cout << horas << ":";}

	if (minutos < 10) {
        std::cout << "0" << minutos << ":";
        } else {std::cout << minutos << ":";}

	if (segundos < 10) {
        std::cout << "0" << segundos << std::endl;
        } else {std::cout << segundos << std::endl;}
	
	return 0;
	}
