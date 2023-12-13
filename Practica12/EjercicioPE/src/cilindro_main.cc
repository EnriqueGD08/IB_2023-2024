/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 13 dic 2023
* @brief programa que crea un objeto cilindro con el radio de su base y la altura
*/


#include "cilindro.h"

int main() {
  cilindro cilindro1;
  cilindro1.set_altura(3.1);
  cilindro1.set_radio(1.3);
  cilindro cilindro2(4.6, 2.4);
  std::cout << "Altura del cilindro: " << cilindro1.get_altura() << std::endl;
  std::cout << "Radio de la base del cilindro: " << cilindro1.get_radio() << std::endl;
  std::cout << "Area del cilindro: " << cilindro1.area() << std::endl;
  std::cout << "Volumen del cilindro: " << cilindro1.volumen() << std::endl;
  return 0;
}